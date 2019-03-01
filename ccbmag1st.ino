#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

int a[5][5];
int i;
int j;


void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  for (i = 1; i < 5; i++)
  {
    for (j = 1; j < 5; j++)
    {
      a[i][j] = 1;
    }
  }
}
void loop() {
  if (((digitalRead(2)) == (0) && a[1][1])) {
    Serial.println("A1;");
    a[1][1] = 0;
  } 
  if (((digitalRead(3)) == (0) && a[2][1])) {
    Serial.println("B1;");
    a[2][1] = 0;
  } 
  if (((digitalRead(4)) == (0) && a[3][1])) {
    Serial.println("C1;");
    a[3][1] = 0;
  } 
//¼ÌÐøÔö¼Ó  
}