/* Prof. Michele Maffucci
   16.03.2014
 
   Uso di un led RGB ad anodo comune
   Spegnimento graduale del LED Rosso
 
   Questo codice è di dominio pubblico 
*/

// pin a cui collegare i piedini del LED RGB
const int VERDE = 9;
const int BLU = 10;
const int ROSSO = 11;

// tempo di transizione colore
const int delayTime = 20;

void setup() {

  // imposta il pin digitale come output
  pinMode(VERDE, OUTPUT);
  pinMode(BLU, OUTPUT);
  pinMode(ROSSO, OUTPUT);


  // si impostano ad HIGH i pin VERDE, BLU, ROSSO
  // inizialmente il led RGB sarà spento
  digitalWrite(VERDE, HIGH);
  digitalWrite(BLU, HIGH);
  digitalWrite(ROSSO, HIGH);
}

// definizione di variabili globali
int ValRosso;

void loop() {
  // spegnimento graduale del rosso

  // coordinate RGB del rosso: 255, 0, 0

  ValRosso = 255;

  for( int i = 0 ; i < 255 ; i += 1 ){

    ValRosso -= 1;

    /* ad ogni ciclio la differenza
     255 - ValRosso AUMENTA
     provocando un graduale spegnimento del rosso
     */

    analogWrite( ROSSO, 255 - ValRosso );

    // attesa di 20 ms per percepire il colore
    delay( delayTime );
  }
}


