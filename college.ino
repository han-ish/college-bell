#include <Wire.h>
#include <Time.h>
#include <DS1307RTC.h>
#include <LiquidCrystal.h>

//use weekday() to findout the day.
int pin = 8;
//int pin1 = 9;
int h,m;
int long_delay = 4000;
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  digitalWrite(pin, HIGH);
  pinMode(pin, OUTPUT);
  //pinMode(pin1, OUTPUT);
  while (!Serial) ; // wait for serial
  delay(200);
  Serial.println("DS1307RTC Read Test");
  Serial.println("-------------------");
  //digitalWrite(pin1, HIGH);
  lcd.print("Welcome to UCC Time Keeper...");
  delay(1000);
  for(int i = 0; i < 16; i++)
  {
    lcd.scrollDisplayLeft();
    delay(200);
  }
  //digitalWrite(pin1, LOW);
  lcd.clear();
}

void loop() {
  tmElements_t tm;
  // reading the time from the RTC
  if (RTC.read(tm)) {
    lcd.setCursor(0,0);
    lcd.print("   UCC MCA  ");
    Serial.println(dayofweek(tm.Day, tm.Month, tmYearToCalendar(tm.Year)));
    h=tm.Hour;
    m=tm.Minute;
    lcd.setCursor(0,1);
    lcd.print(h);
    lcd.print(":");
    lcd.print(m);
    lcd.print(":");
    lcd.print(tm.Second);
    
    if( tm.Hour == 9 && tm.Minute == 05 && tm.Second < 3)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(3000);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    else if( tm.Hour == 9 && tm.Minute == 15 && tm.Second < 3)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(3000);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    else if(tm.Hour == 9 && tm.Minute == 20 && tm.Second < 5)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(long_delay);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
      
    else if(tm.Hour == 10 && tm.Minute == 20 && tm.Second < 5)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(long_delay);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    else if(tm.Hour == 11 && tm.Minute == 20 && tm.Second < 5)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(long_delay);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    else if(tm.Hour == 11 && tm.Minute == 30 && tm.Second < 5)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(long_delay);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    else if(tm.Hour == 12 && tm.Minute == 30 && tm.Second < 5)
    {
      digitalWrite(pin, LOW);
      //digitalWrite(pin1, HIGH);
      delay(long_delay);
      digitalWrite(pin, HIGH);
      //digitalWrite(pin1, LOW);
      //delay(2000);
      lcd.clear();
    }
    if(dayofweek(tm.Day, tm.Month, tmYearToCalendar(tm.Year)) == 5)
    {
      if(tm.Hour == 13 && tm.Minute == 30 && tm.Second < 3)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(3000);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 13 && tm.Minute == 40 && tm.Second < 3)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(3000);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 13 && tm.Minute == 45 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 14 && tm.Minute == 40 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 15 && tm.Minute == 35 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 16 && tm.Minute == 30 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
    }
    else
    {
      if(tm.Hour == 13 && tm.Minute == 15 && tm.Second < 3)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(3000);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 13 && tm.Minute == 25 && tm.Second < 3)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(3000);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 13 && tm.Minute == 30 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 14 && tm.Minute == 30 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 15 && tm.Minute == 30 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
      else if(tm.Hour == 16 && tm.Minute == 30 && tm.Second < 5)
      {
        digitalWrite(pin, LOW);
        //digitalWrite(pin1, HIGH);
        delay(long_delay);
        digitalWrite(pin, HIGH);
        //digitalWrite(pin1, LOW);
        //delay(2000);
        lcd.clear();
      }
    }
  } else {
    if (RTC.chipPresent()) {
      Serial.println("The DS1307 is stopped.  Please run the SetTime");
      Serial.println("example to initialize the time and begin running.");
      Serial.println();
      lcd.print("Time not set");
    } else {
      Serial.println("DS1307 read error!  Please check the circuitry.");
      Serial.println();
      lcd.clear();
      lcd.print("No Power!");
    }
    delay(9000);
  }
  delay(1000);
}

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
