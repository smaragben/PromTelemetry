#include <Helper.h>


#include <CSV_Parser.h>

long randNumber;
Helper h;

void setup() {
  Serial.begin(9600);

}

void loop() {

  Serial.println(h.data());
  /*
  randNumber = random(300);
  Serial.print(randNumber);
  Serial.print(" ");

  randNumber = random(10, 20);
  Serial.print(randNumber);
  Serial.print(" ");

  randNumber = random(50,100);
  Serial.println(randNumber);*/
  delay(2000);
}
