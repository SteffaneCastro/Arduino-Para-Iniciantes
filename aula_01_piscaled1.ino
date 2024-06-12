// Aula - 01: Pisca LED
//INTRODUÇAO AO CÓDIGO

//Estas duas barras ou servem para fazer os comentários.
//OS COMENTÁRIOS servem como anotações nos códigos

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //O ";" indica o final de um comando
} // As chaves delimitam o escopo das funções

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Esperar por 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Esperar por 1000 millisecond(s)
}