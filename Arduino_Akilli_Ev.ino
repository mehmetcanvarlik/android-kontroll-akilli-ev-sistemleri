

// bluetooth kontrol¸ yeni kodlar 

#include <Servo.h>

// ISI VE NEM LIBRARIES -->

#include <dht11.h> // dht11 k¸t¸phanesini ekliyoruz.

#define DHT11PIN 2 // DHT11PIN olarak Dijital 2'yi belirliyor

// ISI VE NEM LIBRARIES <--

dht11 DHT11;

int led = 9;

 int pirPin = 3; // PIR pin

int ledPin = 4;   // LED pin

int ledpir = 5;

int deger = 0; 

Servo myservo; // servo tanimlama

Servo servo1; // ikinci servo

int pos = 0; //servo pos



#include <SoftwareSerial.h>// import the serial library

SoftwareSerial Genotronex(10, 11); // RX, TX





int BluetoothData; // the data given from Computer



void setup() {

   myservo.attach(6); // Servonun sinyal alacagi pin numarasini belirliyorsunuz.

   servo1.attach(7);

  pinMode(ledPin, OUTPUT);

   pinMode(ledpir, OUTPUT);   // LED Pin'i Cikis yapiliyor

  Serial.begin(9600);

  Genotronex.begin(9600);

  pinMode(led, OUTPUT);

  pinMode(pirPin, INPUT); 
}

void loop() {


   int chk = DHT11.read(DHT11PIN);

    deger = digitalRead(pirPin);  // Dijital pin okunuyor

 
 //BLUETOOTH KONTROL SERIDI

   if (Genotronex.available()){

BluetoothData=Genotronex.read();

   if(BluetoothData=='1'){  

    Genotronex.print("Sicaklik (Celcius): ");

    Genotronex.println((float)DHT11.temperature, 2); 

  Genotronex.print("Sicaklik (Fahrenheit): ");

  Genotronex.println(DHT11.fahrenheit(), 2);

  Genotronex.print("Sicaklik (Kelvin): ");

  Genotronex.println(DHT11.kelvin(), 2);

  // Cig Olusma Noktasi

 Genotronex.print("Cig Olusma Noktasi: ");

  Genotronex.println(DHT11.dewPoint(), 2);    

  

   }

  if (BluetoothData=='0'){

  digitalWrite(led, HIGH);   

Genotronex.print("Yandi! ");  

  }

  if (BluetoothData=='3') {

  

  for(pos = 0; pos < 90; pos += 1) {

myservo.write(pos); // Belirlenen pozisyona gitmesi isteniyor. 

delay(5); // Pozisyona 5 ms de ulasiyor. 

} 

  }

  if (BluetoothData=='4'){

 
  for(pos = 90; pos>=0; pos-=1){ // Servo 1'den 0 pozisyonuna 90 derece dˆnecek.

myservo.write(pos); // Belirlenen pozisyona gitmesi isteniyor. 

delay(5); // Pozisyona 5 ms de ulasiyor

} 

  }

  if (BluetoothData=='6') {

  for(pos = 0; pos < 90; pos += 1) {

servo1.write(pos); // Belirlenen pozisyona gitmesi isteniyor. 

delay(5); // Pozisyona 5 ms de ulasiyor. 

} 

  }

  if (BluetoothData=='7'){

  for(pos = 90; pos>=0; pos-=1){ // Servo 1'den 0 pozisyonuna 90 derece dˆnecek.

servo1.write(pos); // Belirlenen pozisyona gitmesi isteniyor. 

delay(5); // Pozisyona 5 ms de ulasiyor

} 

  }



  if (BluetoothData=='5'){

    if (deger == HIGH) {            

    digitalWrite(ledPin, HIGH);  

    Genotronex.print("Hareket Var");  

    delay(3000);

     digitalWrite(ledPin, LOW);

  }

  else{

    digitalWrite(ledPin,LOW);   // Eger okunan deger 0 ise LED sonduruluyor

    Genotronex.print("Hareket Yok");

  }   

    }
  if (BluetoothData=='9') {

  digitalWrite(ledpir, HIGH);
  }
}

// BLUETOOTH KONTROL SON 

delay(100);

}
