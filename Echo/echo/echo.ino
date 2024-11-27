String texto ="";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    char recibido = Serial.read();

    if (recibido == '\n')
    {
      String frase = Conversion(texto);
      Serial.println(frase);
      texto ="";
    }

    else 
    {
      texto += recibido;
    }
    
  }
  
  

  


}

String Conversion (String frase) {
  String resultado = "";
  for (int i = 0; i < frase.length(); i++)
  {
    char j = frase[i];
    if (isLowerCase(j))
    {
      resultado += (char)toupper(j);
    }
    else if (isUpperCase(j))
    {
      resultado += (char)tolower(j);
    }
    else {
    resultado += j;
    }
  }

  return resultado;
}


