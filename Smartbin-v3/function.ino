void beep()
{
  digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(50);
digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(50);
digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(50);
}
void beep2()
{
  digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(100);
digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(100);
digitalWrite(buz, HIGH);delay(100);digitalWrite(buz, LOW);delay(100);
}

void check()
{
  if (v <= 100) //bin cover is opened
 {         
beep();
  delay(1000);

//leds=0;  
digitalWrite(r, LOW);  // indicate via LED

val=0;
  }



if (v >= 1000)     //bin cover is closed
{
  val=val+1;
  val=val;


}

if(val==0)        //after bin cover is closed, 1st s-ir reading 
{
    Serial.println(val);
    Serial.println("checking sensor value");
    }



if(val==1)        //after bin cover is closed, 1st s-ir reading 
{
  delay(2000);
  
    Serial.println(val);
    Serial.println("checking sensor value");

  sensorValue1 = analogRead(liqmid);
  sensorValue2 = analogRead(liqlow);
  cm=analogRead(sirpin);
Serial.print("sirval=    ");
    Serial.print(sirval);
    Serial.print("  s1=    ");
    Serial.print(sensorValue1);
    Serial.print("    sirval=    ");
    Serial.println(sensorValue2);
    
//  rcvcount=rcvcount+1;rcvcount=rcvcount;





if(sensorValue1 >= s1thrs  && sensorValue2 < s2thrs)

{
  Serial.print("    ");
  Serial.print("low lvl water");
  wt=10; wt=wt;
  }
  
else  if(sensorValue1 < s1thrs  && sensorValue2 >= s2thrs)
{
  Serial.print("    ");
  Serial.print("mid lvl water");
  wt=50; wt=wt;
  }
else  if(sensorValue1 >= s1thrs  && sensorValue2 >= s2thrs)
{
  Serial.print("    ");
  Serial.print("mid lvl water");
 wt=50; wt=wt;
  }
else if(sensorValue1 < s1thrs  && sensorValue2 < s2thrs)
{
  Serial.print("    ");
  Serial.print("    no water");
  wt=0; wt=wt;

  }



 if(cm <= empty)
{
p=10;
p=p;
      Serial.print("    ");
  Serial.print("empty  ");
  }



  
else if(cm < full && cm >empty)
{
p=70;
p=p;
  beep();
  Serial.print("    ");
  Serial.print("mid  ");
// senthttp();
}


  
else if(cm >= full)
{
p=100;
p=p;
  Serial.print("    ");
  Serial.print("full  ");
 beep();
 //senthttp();
  }
}  
}
