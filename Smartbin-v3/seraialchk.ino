void d()
{
  if(millis() >= timenow + period)   
  { timenow += period; 
  Serial.println(timenow); 
  }

}


void receive_message()
{
  if (mySerial.available() > 0)
  {
    incomingData = mySerial.readString(); // Get the data from the serial port.
    Serial.print(incomingData); 
    delay(10); 
rcvcount=rcvcount+1;
rcvcount=rcvcount;
  }

   if(incomingData.indexOf("rcv")>=0)
  {
Serial.print("got data");
beep2();
val=5;
val=val;
incomingData ="";
rcvcount=20;
//rcv=20;
rcvcount=rcvcount;
 delay(1000);
 mySerial.println("AT+HTTPTERM");
 Serial.println("AT+HTTPTERM");
 delay(1000);

// delay(1000); 
  }  





   
}



/*
String inputString = "";         // a string to hold incoming data

boolean stringComplete = false;  // whether the string is complete



String incomingString ="";

int startIndex = 0;

int endIndex = 0;



int led1 = 4;



void setup() {

  // initialize serial:

  Serial.begin(9600);



   // prepare the digital output pins

   pinMode(led1, OUTPUT);



   // initially all are off

   digitalWrite(led1, LOW);

 

  // reserve 200 bytes for the inputString:

  inputString.reserve(200);



  //--Start: Send SMS --

  Serial.print("AT+CMGF=1\r");    

  delay(1000);



  //Serial.print("AT+CMGD=1,4\r");  // Deletes all SMS saved in SIM memory

  Serial.print("AT+CMGDA=\""); 

  Serial.println("DEL ALL\"");

  

  delay(1000);

  Serial.print("AT+CMGS=\"+91XXXXXXXXXX\"\r");    //Number to which you want to send the sms



  delay(1000);

  Serial.print("Test SMS - It Started Working1..\r");   //The text of the message to be sent

  delay(1000);

  Serial.write(0x1A);

  delay(1000);



  Serial.print("AT+CNMI=2,2,0,0,0\r"); 

  delay(1000);

  //--End: SMS--

}



void loop() {

  // print the string when a newline arrives:

  if (stringComplete && inputString!="") {



    //Serial.print("AT+CMGL=ALL\r");

    inputString.toLowerCase();



    if(inputString=="@light on#")

    {

      digitalWrite(led1, HIGH); 

    }

    else if(inputString=="@light off#")

    {

      digitalWrite(led1, LOW); 

    }

   Serial.print("AT+CMGDA=\""); 

   Serial.println("DEL ALL\""); // To Delete Messages from SIM Memory

   delay(1000);

  // clear the string:

   inputString = "";

   stringComplete = false;

  }

}



void serialEvent() 

{

   if(stringComplete == false)

   { 

        incomingString = Serial.readString();

        if(incomingString!="")

        {

          startIndex = incomingString.indexOf("@");

          endIndex = incomingString.indexOf("#");



          if(startIndex>0 && endIndex>0)

          {

             inputString = incomingString.substring(startIndex,endIndex+1);

             stringComplete = true;

          }

   }

}

































/*

void receive_message()
{
  if (mySerial.available() > 0)
  {
    incomingData = mySerial.readString(); // Get the data from the serial port.
    Serial.print(incomingData); 
    delay(10); 
  }

incomingData.toLowerCase();
  // if received command is to turn on relay
  if(incomingData.indexOf("id")>=0)
  {
    Serial.println("got id");
    delay(1000);
    message = "Led is turned ON";
    // Send a sms back to confirm that the relay is turned on
  }
  
  // if received command is to turn off relay
  if(incomingData.indexOf("Led_off")>=0)
  {
    Serial.println("light off");
    delay(1000);    
    message = "Led is turned OFF";
    // Send a sms back to confirm that the relay is turned off
  } 

 // incomingData = "";
}


*/
