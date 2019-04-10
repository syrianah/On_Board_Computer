#include <Wire.h>
#include "i2c.h"

#include "i2c_BMP280.h"
BMP280 bmp280;
float pressure = 0;
float srednia = 0;
float temp = 0;
float suma=0;
static float meters, altitude;
void setup()
{
    Serial.begin(9600);

    Serial.print("Probe BMP280: ");
    if (bmp280.initialize()) Serial.println("Sensor found");
    else
    {
        Serial.println("Sensor missing");
        while (1) {}
    }

    // onetime-measure:
    bmp280.setEnabled(0);
    bmp280.triggerMeasurement();

    for(int i=0;i<10;i++)
    {
      bmp280.awaitMeasurement();
      bmp280.getTemperature(temp);
      bmp280.getPressure(pressure);
      srednia=srednia+pressure;
      bmp280.triggerMeasurement();
    }
    srednia=srednia/10;
    
}

void loop()
{
    bmp280.awaitMeasurement();

    bmp280.getTemperature(temp);

    bmp280.getPressure(pressure);

    bmp280.getAltitude(meters,srednia);
    altitude = (altitude * 10 + meters)/11;

    bmp280.triggerMeasurement();


    
    Serial.print("D:");
    Serial.print(temp);
    Serial.print(":");
    Serial.print(pressure);
    Serial.print(":");
    Serial.print(altitude);
    Serial.println();

}

/**<

Program size:
A1.0.5:
A1.5.7: 9680b
A1.6.3: 9664b / 561b

 */

