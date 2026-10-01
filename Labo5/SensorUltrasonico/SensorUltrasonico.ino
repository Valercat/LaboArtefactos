// C++ code
//
int TRIG = 18; //salida 
int ECHO = 19; //entrada
long t = 0;
float distancia = 0;

void setup()
{
  pinMode(TRIG, OUTPUT);
  pinMode (ECHO, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
 //asegurar que trig está apagado
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
 //hacer funcionar trig
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  //guardar valor de echo 
  t = pulseIn(ECHO, HIGH); //microsegundos
  distancia=(0.000344*t)/2; //d= v*t --> 
  Serial.print("distancia: ");
  Serial.println(distancia);
  delay(1500);
}