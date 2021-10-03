int a = 9;
int b = 8;
int c = 7;
int d = 6;
int e = 5;
int f = 4;
int g = 3;

int G1 = 13;
int G2 = 12;
int G3 = 11;
int G4 = 10;

int deddlay = 600;
int scan = 1; 

void setup() {
  // put your setup code here, to run once:
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);

pinMode(G1, OUTPUT);
pinMode(G2, OUTPUT);
pinMode(G3, OUTPUT);
pinMode(G4, OUTPUT);

digitalWrite(G1, HIGH);
digitalWrite(G2, HIGH);
digitalWrite(G3, HIGH);
digitalWrite(G4, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
Spin();
Spin();
Spin();
Spin();
delay(100);
Blink();
Blink();
delay(100);
Henlo();
Blank();
delay(100);
Blink();
Blink();
delay(100);
Load();
Load();
delay(100);
Blink();
delay(100); 
HeloFren();
GridUp();
}

void Blank() {
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}

void Blink() {

digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
delay(100);
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
delay(100);
}

void Spin() {

digitalWrite(a, HIGH);
delay(80);
digitalWrite(a, LOW);
delay(20);

digitalWrite(b, HIGH);
delay(80);
digitalWrite(b, LOW);
delay(20);

digitalWrite(c, HIGH);
delay(80);
digitalWrite(c, LOW);
delay(20);

digitalWrite(d, HIGH);
delay(80);
digitalWrite(d, LOW);
delay(20);

digitalWrite(e, HIGH);
delay(80);
digitalWrite(e, LOW);
delay(20);

digitalWrite(f, HIGH);
delay(80);
digitalWrite(f, LOW);
delay(20);
}

void Henlo() {

digitalWrite(f, HIGH);
digitalWrite(e, HIGH);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
delay(deddlay);
digitalWrite(f, LOW);
digitalWrite(e, LOW);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
delayMicroseconds(20);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
digitalWrite(d, HIGH);
delay(deddlay);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(e, LOW);
digitalWrite(d, LOW);
delayMicroseconds(20);

digitalWrite(e, HIGH);
digitalWrite(g, HIGH);
digitalWrite(c, HIGH);
delay(deddlay);
digitalWrite(e, LOW);
digitalWrite(g, LOW);
digitalWrite(c, LOW);
delayMicroseconds(20);

digitalWrite(f, HIGH);
digitalWrite(e, HIGH);
digitalWrite(d, HIGH);
delay(deddlay);
digitalWrite(f, LOW);
digitalWrite(e, LOW);
digitalWrite(d, LOW);
delayMicroseconds(20);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(b, HIGH);
digitalWrite(e, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
delay(deddlay);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(b, LOW);
digitalWrite(e, LOW);
digitalWrite(c, LOW);
digitalWrite(d, HIGH);
delayMicroseconds(20);
}

void Load() {

digitalWrite(a, HIGH);
delay(100);
digitalWrite(f, HIGH);
delay(100);
digitalWrite(e, HIGH);
delay(100);
digitalWrite(d, HIGH);
delay(100);
digitalWrite(c, HIGH);
delay(100);
digitalWrite(b, HIGH);
delay(100);

digitalWrite(a, LOW);
delay(100);
digitalWrite(f, LOW);
delay(100);
digitalWrite(e, LOW);
delay(100);
digitalWrite(d, LOW);
delay(100);
digitalWrite(c, LOW);
delay(100);
digitalWrite(b, LOW);
delay(100);

}

void HeloFren() {

for( int tStart = millis();  (millis()-tStart) < deddlay * 2;  ){

digitalWrite(G1, LOW);
digitalWrite(G2, LOW);
digitalWrite(G3, LOW);
digitalWrite(G4, HIGH);

digitalWrite(f, HIGH);
digitalWrite(b, HIGH);
digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
digitalWrite(c, HIGH);
delay(scan);
digitalWrite(f, LOW);
digitalWrite(b, LOW);
digitalWrite(g, LOW);
digitalWrite(e, LOW);
digitalWrite(c, LOW);


digitalWrite(G4, LOW);
digitalWrite(G3, HIGH);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
digitalWrite(d, HIGH);
delay(scan);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(e, LOW);
digitalWrite(d, LOW);


digitalWrite(G3, LOW);
digitalWrite(G2, HIGH);

digitalWrite(f, HIGH);
digitalWrite(e, HIGH);
digitalWrite(d, HIGH);
delay(scan);
digitalWrite(f, LOW);
digitalWrite(e, LOW);
digitalWrite(d, LOW);

 
digitalWrite(G2, LOW);
digitalWrite(G1, HIGH);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(b, HIGH);
digitalWrite(e, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
delay(scan);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(b, LOW);
digitalWrite(e, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);

digitalWrite(G1, LOW);
}

delay(100);

for( int tStart = millis();  (millis()-tStart) < deddlay * 2;  ){

digitalWrite(G1, LOW);
digitalWrite(G2, LOW);
digitalWrite(G3, LOW);
digitalWrite(G4, HIGH);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
delay(scan);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(e, LOW);


digitalWrite(G4, LOW);
digitalWrite(G3, HIGH);

digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
delay(scan);
digitalWrite(g, LOW);
digitalWrite(e, LOW);


digitalWrite(G3, LOW);
digitalWrite(G2, HIGH);

digitalWrite(a, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
digitalWrite(d, HIGH);
delay(scan);
digitalWrite(a, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(e, LOW);
digitalWrite(d, LOW);
 
digitalWrite(G2, LOW);
digitalWrite(G1, HIGH);

digitalWrite(g, HIGH);
digitalWrite(e, HIGH);
digitalWrite(c, HIGH);
delay(scan);
digitalWrite(g, LOW);
digitalWrite(e, LOW);
digitalWrite(c, LOW);

digitalWrite(G1, LOW);
}
int tStart = 0;
}

void GridUp() {
digitalWrite(G1, HIGH);
digitalWrite(G2, HIGH);
digitalWrite(G3, HIGH);
digitalWrite(G4, HIGH);
}
