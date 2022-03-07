#include <led>
SoftwareSerial BTSerial(10,11); //RX - TX
void setup()
{
    Serial.begin(9600);
    Serial.println("Enter AT commands:");
    BTSerial.begin(9600);
}
void loop()
{
    if(BTSerial.available())
    Serial.write(BTSerial.read());
    if(Serial.available())
        BTSerial.write(Serial.read());
}
