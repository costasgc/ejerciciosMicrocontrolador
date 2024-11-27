int ctr1 = 0;
int ctr2 = 0;
unsigned long tiempo;
unsigned long tiempo2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tiempo = micros();
  tiempo2 = micros();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (micros() - tiempo >= 100000)
  {
    tiempo = micros();
    Serial.print("Contador ctr1: ");
    Serial.println(ctr1);
    Serial.print("Contador ctr2: ");
    Serial.println(ctr2);
    ctr1++;
  }

  if (micros() - tiempo2 >= 2000000)
  {
    tiempo2 = micros();
    ctr1 -= ctr2;
    Serial.print("Contador ctr1: ");
    Serial.println(ctr1);
    Serial.print("Contador ctr2: ");
    Serial.println(ctr2);
    ctr2++;
  }
  
}
