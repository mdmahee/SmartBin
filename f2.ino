void checkval()
{
 if(wt==10)
 {
    analogWrite(r, 255); //yellow
    analogWrite(g, 255);
    analogWrite(b, 125);
    delay(1000);
 }
 else if(wt==50)
 {
    analogWrite(r, 237);  //orange
    analogWrite(g, 109);
    analogWrite(b, 0);
    delay(1000);
 }



  
 if(p==10)
 {
    analogWrite(r, 0);
    analogWrite(g, 255);
    analogWrite(b, 0);
    delay(1000);
if(val==1)
{
  senthttp();
    val=5;
   val=val;
}
}

else if(p==70)
 {
    analogWrite(g, 0);
  analogWrite(b, 255);
  analogWrite(r, 0);
    delay(1000);
    val=val; 

if(val==1)
{
  senthttp();
    val=5;
   val=val;
}
 }

  if(p==100)
 {
   analogWrite(g, 0);
  analogWrite(b, 0);
  analogWrite(r, 255);
    delay(1000);
    val=val;
    
if(val==1)
{
  senthttp();
    val=5;
   val=val;
}
 }


 
}
