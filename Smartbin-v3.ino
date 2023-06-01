
#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 2); //SIM800L Tx & Rx is connected to Arduino #3 & #2

String incomingData;

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
String incomingString ="";
int startIndex = 0;
int endIndex = 0;





int period = 10000;
unsigned long timenow = 0;
unsigned long timeprv = 0;

/*int LEDpin = 11;     // LED on pin 5
int LEDpin2 = A0;     // LED on pin 5
int switchPin = 7; // momentary switch on 13, other side connected to ground
*/
const int buz=8; //A5
const int r=11; //8
const int g=9;  //6
const int b=10; //7

int switchPin = A1;   // 4 momentary switch on 7, other side connected to ground
const int sirpin = A0;

int liqmid=A3;
int liqlow=A5;
int volt=A4;


int v;          //read switch
int val=0;      //switch data
int sirval;     //sirval
int leds;       //led stutus
int rcvcount,rcv,cicle;

int cm,wt,s1,s2,sensorValue1, sensorValue2, p;
int con=1;
int empty=400;
int mid=400;
int full=600;

int s1thrs=400;
int s2thrs=400;

void setup() {

  timenow=millis();
  
    inputString.reserve(200);

  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(buz, OUTPUT);
  
pinMode(switchPin, INPUT);
  
    Serial.begin (115200);
  mySerial.begin(115200);
  
beep();
  Serial.println("Initializing...");
  delay(1000);
  mySerial.println("AT"); //Once the handshake test is successful, it will back to OK
  Serial.println("AT"); //Once the handshake test is successful, it will back to OK
  ShowSerialData();
 //   sentdata();
    analogWrite(r, 0);
    analogWrite(g, 255);
    analogWrite(b, 0);
    delay(1000);
  }



void loop() {
//delay(5000);
timenow=millis();

checkval();



if (rcvcount>=5 && rcvcount<=20)
{  
  mySerial.println("AT+HTTPREAD");
  delay(100);
 d();
  delay(1000);
  
  receive_message();
    Serial.print("rcvcount    ");
  Serial.println(rcvcount);
}
  

 // ShowSerialData();  delay(100); d();
    
if (rcvcount>=20 && rcv<20){ 
  cicle=cicle+1;
  cicle=cicle;
 // senthttp();     //was on before
  }

/*if(cicle==2)    //was on before
{
  analogWrite(r, 255);
  beep();
  Serial.print("net prb");
}
*/



if(cicle>=3)
{
  cicle=0;
  cicle=cicle;
}




    
  //ShowSerialData();


 
 v=analogRead(switchPin);     //read tilt sensor value
 
   check();
  
 
  
  if(val==5)
  {
    val=2;
    val=val;
  }
  val=val;
  leds=leds;
  p=p;
  wt=wt;
  con=con;
      Serial.print("cicle    ");
  Serial.print(cicle);
  Serial.print("  rcvcount    ");
  Serial.print(rcvcount);
        Serial.print("  rcv    ");
  Serial.print(rcv);
        Serial.print("  val    ");
  Serial.print(val);
          Serial.print("  p    ");
  Serial.print(p);
          Serial.print("  wt    ");
  Serial.println(wt);
  
  }
