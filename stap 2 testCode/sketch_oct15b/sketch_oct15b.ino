
/*****************************************
   Voorbeeld TestCode
   Voor circuit met 2 leds en 2 knoppen
   Breid de code zelf uit
   zodat je deze kunt gebruiken om te testen
   of alle componenten (nog) goed
   zijn aangesloten op je Arduino
   Emmauscollege
   v20210210GEE
 *****************************************/

/*****************************************
   variabelen die je gebruikt maken
 *****************************************/
// gebruikte pinnen
const int pinLedRood   = 9; // pin van LED A
const int pinLedGeel   = 8; // pin van LED B
const int pinLedGroen   = 7; // pin van LED C
const int pinKnopS1  = 12; // pin van knop A
const int pinKnopS2  = 11; // pin van knop B
const int pinKnopStart  = 10; // pin van know C

/*****************************************
   setup()
 *****************************************/
void setup() {
  // enable console en stuur opstartbericht
  Serial.begin(9600);
  Serial.println("Test start");

  // zet pinmode voor leds
  pinMode(pinLedRood, OUTPUT);
  pinMode(pinLedGeel, OUTPUT);
  pinMode(pinLedGroen, OUTPUT);

  // zet pinmode voor knoppen
  pinMode(pinKnopS1, INPUT);
  pinMode(pinKnopS2, INPUT);
  pinMode(pinKnopStart, INPUT);

  // zet LEDs aan
  digitalWrite(pinLedRood, HIGH);
  digitalWrite(pinLedGeel, HIGH);
  digitalWrite(pinLedGroen, HIGH);
  // wacht seconde zodat je kunt zien dat de LEDs het doen
  delay(1000);
}

/*****************************************
   loop()
 *****************************************/
void loop() {
  // zet Ledrood aan/uit afhankelijk van stand van knops1
  if (digitalRead(pinKnopS1) == LOW) {
    digitalWrite(pinLedRood, HIGH);
  } else {
    digitalWrite(pinLedRood, LOW);
  }

  // zet Ledgroen aan/uit afhankelijk van stand van knops2
  if (digitalRead(pinKnopS2) == LOW) {
    digitalWrite(pinLedGroen, HIGH);
  } else {
    digitalWrite(pinLedGroen, LOW);
  }

   // zet ledgeel aan/uit afhankelijk van stand van knopstart
   if (digitalRead(pinKnopStart) == LOW) {
    digitalWrite(pinLedGeel, HIGH);
  } else {
    digitalWrite(pinLedGeel, LOW);
  }
  // kleine vertraging, 100 keer per seconde loopen is genoeg
  delay(10);
}
