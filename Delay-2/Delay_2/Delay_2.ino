int ctr1 = 0;
int ctr2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Contador ctr1: ");
  Serial.println(ctr1);
  Serial.print("Contador ctr2: ");
  Serial.println(ctr2);
  ctr1++;
  delay(100);
  static int resta = 0;
  resta += 100;
  if (resta == 2000)
  {
    ctr2++;
    ctr1 -= ctr2;
    resta = 0;
  }
}
