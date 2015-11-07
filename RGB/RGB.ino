// change
int Rled = 9;  // led
int Gled = 10;  // led
int Bled = 11;  // led

const int Rpot = 0;   // potentiometer
const int Gpot = 1;   // potentiometer
const int Bpot = 2;   // potentiometer

int Rval = 0;         // variable to store the reading
int Gval = 0;         // variable to store the reading
int Bval = 0;         // variable to store the reading

void setup()
{
  pinMode(Rled, OUTPUT);   // sets the pin as output
  pinMode(Gled, OUTPUT);   // sets the pin as output
  pinMode(Bled, OUTPUT);   // sets the pin as output
  
  analogWrite(Rled, Rval);
  analogWrite(Gled, Gval);
  analogWrite(Bled, Bval);
  
}

void loop()
{
  Rval = (255 - map( analogRead(Rpot), 0, 1024, 0, 255 ) );
  Gval = (255 - map( analogRead(Gpot), 0, 1024, 0, 255 ) );
  Bval = (255 - map( analogRead(Bpot), 0, 1024, 0, 255 ) );
  
  analogWrite(Rled, Rval);
  analogWrite(Gled, Gval);
  analogWrite(Bled, Bval);
  
}
