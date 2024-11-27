int ctr1 = 0;
int previo;
unsigned long tiempo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tiempo = millis();

}

void loop() {
  // put your main code here, to run repeatedly:
    
    
    if (millis() >= tiempo + 1000 )
    {
      tiempo = millis();
      Serial.print("Contador ctr1: ");
      Serial.println(ctr1);
      ctr1++;
      previo == tiempo;
    }
  
  
}
