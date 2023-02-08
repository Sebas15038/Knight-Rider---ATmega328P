/*  Knight Rider sin placa de desarrollo Arduino
 *  Sebastián Eugenio Méndez Espinosa
 *  Created: February 6th, 2023
 *  Updated: February 6th, 2023
 */


//Outputs
#define LED_GREEN1  3
#define LED_GREEN2  4
#define LED_GREEN3  5
#define LED_YELLOW1 12
#define LED_YELLOW2 11
#define LED_YELLOW3 10
#define LED_YELLOW4 9
#define LED_RED1    6
#define LED_RED2    7
#define LED_RED3    8

//Variables
#define TIME 5


void setup() 
{
  pinMode(LED_GREEN1, OUTPUT);
  pinMode(LED_GREEN2, OUTPUT);
  pinMode(LED_GREEN3, OUTPUT);
  pinMode(LED_YELLOW1, OUTPUT);
  pinMode(LED_YELLOW2, OUTPUT);
  pinMode(LED_YELLOW3, OUTPUT);
  pinMode(LED_YELLOW4, OUTPUT);
  pinMode(LED_RED1, OUTPUT);
  pinMode(LED_RED2, OUTPUT);
  pinMode(LED_RED3, OUTPUT);
}

void loop() 
{
  for(byte i = 3; i<6; i++)
  {
    digitalWrite(i, HIGH);
    delay(TIME);
    digitalWrite(i, LOW);
    delay(TIME);
  }
  for(byte j = 12; j>8; j--)
  {
    digitalWrite(j, HIGH);
    delay(TIME);
    digitalWrite(j, LOW);
    delay(TIME);
  }
  for(byte k = 6; k<9; k++)
  {
    digitalWrite(k, HIGH);
    delay(TIME);
    digitalWrite(k, LOW);
    delay(TIME);
  }
  for(byte l = 7; l>5; l--)
  {
    digitalWrite(l, HIGH);
    delay(TIME);
    digitalWrite(l, LOW);
    delay(TIME);
  }
  for(byte m = 9; m < 13; m++)
  {
    digitalWrite(m, HIGH);
    delay(TIME);
    digitalWrite(m, LOW);
    delay(TIME);
  }
  for(byte n = 5; n>3; n--)
  {
    digitalWrite(n, HIGH);
    delay(TIME);
    digitalWrite(n, LOW);
    delay(TIME);
  }
}
