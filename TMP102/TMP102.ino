SYSTEM_MODE(SEMI_AUTOMATIC);
#include <application.h>
int tmp102Address = 0x48; //0x48;
double celsius=0;
double photor=0;
byte MSB=0;
byte LSB=0;

void setup(){
    Spark.variable("temperature", &celsius, DOUBLE);
    Spark.variable("LSB", &LSB, INT);
    Spark.variable("MSB", &MSB, INT);
    pinMode(D6, OUTPUT);
    pinMode(D7, OUTPUT);

    Serial.begin(9600);
    Wire.begin();
}

void loop(){

celsius = getTemperature();
photor =  analogRead(A0);
Serial.println(photor);
//Serial.println(analogRead(A0));
Serial.println(celsius);


delay(1000); //just here to slow down the output. You can remove this
}

float getTemperature(){
Wire.requestFrom(tmp102Address,2);

MSB = Wire.read();
LSB = Wire.read();

//it's a 12bit int, using two's compliment for negative
int TemperatureSum = ((MSB << 8) | LSB) >> 4;

double celsius = TemperatureSum*0.0625;
return celsius;
}
