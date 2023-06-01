
void ShowSerialData()
{
  while(mySerial.available()!=0)
  Serial.write(mySerial.read());
 delay(1000);  //5     
} 

void senthttp()
{
  if (mySerial.available())
    Serial.write(mySerial.read());
 
  mySerial.println("AT");
  Serial.println("AT");
  delay(100);
 d();
  delay(1000);

 //if((timenow-timeprv)==1000)
// {

 mySerial.println("AT+CPIN?");
  Serial.println("AT+CPIN?");
   delay(100);
 d();
 delay(1000);
 //}
  mySerial.println("AT+CFUN?");
  Serial.println("AT+CFUN?");
  delay(100);
 d();
  delay(1000);
//  mySerial.println("AT+SAPBR=3,1,"Contype","GPRS"");
   delay(100);
d();
  delay(1000);  //2
 //mySerial.println("AT+CSTT=\"airtelgprs.com\"");//start task and setting the APN,
  mySerial.println("AT+SAPBR=3,1,\"APN\",\"airtelgprs.com\"");
  Serial.println("AT+SAPBR=3,1,\"APN\",\"airtelgprs.com\"");
  delay(100);
 d();
  delay(1000);  //2
   mySerial.println("AT+SAPBR=3,1,\"USER\",""");
   Serial.println("AT+SAPBR=3,1,\"USER\",""");
  delay(100);
 d();
  delay(1000);
  mySerial.println("AT+SAPBR=3,1,\"PWD\",""");
  Serial.println("AT+SAPBR=3,1,\"PWD\",""");
   delay(100);
d();
  delay(1000);
  ShowSerialData();
  mySerial.println("AT+SAPBR=1,1");
  Serial.println("AT+SAPBR=1,1");
  delay(100);
 d();
  delay(1000);
  ShowSerialData();
  mySerial.println("AT+SAPBR=2,1");
  Serial.println("AT+SAPBR=2,1");
  delay(100);
 d();
  delay(1000);
  ShowSerialData();
  
  mySerial.println("AT+HTTPINIT");
  Serial.println("AT+HTTPINIT");
  delay(100);
 d();

 
  delay(1000);
  ShowSerialData();
  mySerial.println("AT+HTTPSSL=1");  Serial.println("AT+HTTPSSL=1");            //ssl
   delay(100);
d();
 // mySerial.println("AT+HTTPSSL");  Serial.println("AT+HTTPSSL");            //ssl

  delay(1000);
  ShowSerialData();
  mySerial.println("AT+HTTPPARA=\"CID\",1");
  Serial.println("AT+HTTPPARA=\"CID\",1");
  delay(100);
 d();
  delay(1000);
  ShowSerialData();


  delay(1000);
  ShowSerialData();
//  mySerial.println("AT+HTTPPARA=\"PROIP\",\"103.108.140.248\"");  mySerial.println("AT+HTTPPARA=\"PROPORT\",\"8080\"");
 // Serial.println("AT+HTTPPARA=\"PROIP\",\"103.108.140.248\"");  Serial.println("AT+HTTPPARA=\"PROPORT\",\"8080\"");

    delay(1000);

int  wtt=wt;
wtt=wtt;
int  pp=p;
pp=pp;
int conn=con;
conn=conn;



unsigned long srno=100029;
String api= "0ffuMENHZi9lE0jkMheI4k21ndpzbY4vXUMy4LsFGzQR3Hrdf62tEq0tzg3I";

//http://59.152.101.138:9000/api/bin/
String addr =  "AT+HTTPPARA=\"URL\",\"https://robi.eduine.com/api/bin/";
//String addr =  "AT+HTTPPARA=\"URL\",\"https://smartbin.ashfaqhahmed.com/api/bin/";
addr+=srno;
addr+="?api_token=";
addr+=api;
addr+="&isConnected=";
addr+=conn;
addr+="&filledPercentage=";
addr+=pp;
addr+="&wastageType=";
addr+=wtt;
addr+= "\"";
delay(1000);


mySerial.println(addr);
Serial.println(addr);
 delay(1000);

 
 //Serial.println("\n\r");


  //"AT+HTTPPARA=\"URL\",\"https://sbin.desh.ai/api/bin/";
 //Serial.println("AT+HTTPPARA=\"URL\",\"https://smartbin.ashfaqhahmed.com/api/bin/100105/?api_token=wgQ4894E88C0puLq5dcDYOVs9nrwQU7BlgzY8G723X1sTjwO0GArn9kxUlqa&isConnected=1&filledPercentage=100&wastageType=0\"");
 //mySerial.println("AT+HTTPPARA=\"URL\",\"https://smartbin.ashfaqhahmed.com/api/bin/100105/?api_token=wgQ4894E88C0puLq5dcDYOVs9nrwQU7BlgzY8G723X1sTjwO0GArn9kxUlqa&isConnected=1&filledPercentage=100&wastageType=0\"");

// https://sbin.desh.ai/api/bin/100055?api_token=mIW3Jh2p2FagaT2fXc5NlwSDSBmHRWOovpdQ587EgkVi5ed4YjZXxhl2yKKc&isConnected=1&filledPercentage=10&wastageType=0

//mySerial.println("AT+HTTPPARA=\"URL\",\"https://miliohm.com/miliohmSIM800L.php\"");
//mySerial.println("AT+HTTPPARA=\"URL\",\"https://robi.eduine.com/api/bin/100055?api_token=mIW3Jh2p2FagaT2fXc5NlwSDSBmHRWOovpdQ587EgkVi5ed4YjZXxhl2yKKc&isConnected=1&filledPercentage=10&wastageType=0\"");
//Serial.println("AT+HTTPPARA=\"URL\",\"https://robi.eduine.com/api/bin/100055?api_token=mIW3Jh2p2FagaT2fXc5NlwSDSBmHRWOovpdQ587EgkVi5ed4YjZXxhl2yKKc&isConnected=1&filledPercentage=10&wastageType=0\"");
  delay(1000);
  
  //AT+HTTPPARA="URL","https://sbin.desh.ai/api/bin/100055?api_token=mIW3Jh2p2FagaT2fXc5NlwSDSBmHRWOovpdQ587EgkVi5ed4YjZXxhl2yKKc&isConnected=1&filledPercentage=10&wastageType=0"
 
 d();
  delay(2000);
  ShowSerialData();
  mySerial.println("AT+HTTPACTION=0");
  Serial.println("AT+HTTPACTION=0");
  delay(1000);
 d();d();d();d();d();
 
  delay(1000);
  ShowSerialData();
  mySerial.println("AT+HTTPREAD");
  Serial.println("AT+HTTPREAD");
  delay(100);
 d();
  delay(1000);
  ShowSerialData();
  delay(100);
 d();
    delay(2000);


 
  //mySerial.println("AT+HTTPTERM");
  delay(100);
 d();
  delay(1000);
  ShowSerialData();

  delay(100);
 d();
    delay(1000);     //5 //waitting for reply, important! the time is base on the condition of internet 
  rcvcount=6;rcvcount=rcvcount;
} 
