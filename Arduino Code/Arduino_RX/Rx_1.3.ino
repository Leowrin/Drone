#include <SoftwareSerial.h>         //*
SoftwareSerial comserial(2,3);      //*

String entry;
String entryA;
String entryB;

byte Pitch;
byte Roll;


void setup() {
Serial.begin(9600);
Serial.setTimeout(30);

comserial.begin(9600);      //*
comserial.setTimeout(30);   //*
}

void loop() {
if (comserial.available()>1){
  entry = comserial.readString();
  entryA = entry.substring(0,2);
  entryB = entry.substring(2,4);
}
  if (entryA=="A:"){
    Pitch=entryB;
  }
  else if (entryA=="B:") {
    Roll=entryB;
  }
  else if (entryA=="C:") {
    Yaw=entryB;
  }

}