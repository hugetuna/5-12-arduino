#include "pitches.h"

// notes in the melody:
int star[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A5, NOTE_A5, NOTE_G4, 0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2, 4
};
int deepdeepblue[]={
NOTE_F4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4
};
int noteDurationsD[] = {
  4, 4, 8, 8, 8, 8, 4, 4
};
int songnum=0;
bool butbefore=1,butnow=1;

void setup() {
  // iterate over the notes of the melody:
  pinMode(9,INPUT_PULLUP);
  for(int i=2;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(A0,OUTPUT);
}

void loop() {
  // no need to repeat the melody.
  if(songnum==0)
  {
    for (int thisNote = 0; thisNote < 8; thisNote++)
    {
      // to calculate the note duration, take one second divided by the note type.
     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, star[thisNote], noteDuration);
      if (star[thisNote]==NOTE_C4)//led
      {
        digitalWrite(A0,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(A0,LOW);
      }
      else if(star[thisNote]==NOTE_D4)
      {
        digitalWrite(2,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(2,LOW);
      }
      else if(star[thisNote]==NOTE_E4)
      {
        digitalWrite(3,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(3,LOW);
      }
      else if(star[thisNote]==NOTE_F4)
      {
        digitalWrite(4,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(4,LOW);
      }
      else if(star[thisNote]==NOTE_G4)
      {
        digitalWrite(5,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(5,LOW);
      }
      else if(star[thisNote]==NOTE_A5)
      {
        digitalWrite(6,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(6,LOW);
      }
      else if(star[thisNote]==NOTE_B5)
      {
        digitalWrite(7,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(7,LOW);
      }
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      
      // stop the tone playing:
      noTone(8);
      butnow=digitalRead(9);
      if(butnow==0&&butbefore==1)
      {
        songnum=songnum+1;
        thisNote=8;
      }
      butbefore==butnow;
  }
  }
  if(songnum==1)
  {
    for (int thisNote = 0; thisNote < 8; thisNote++)
    {
      // to calculate the note duration, take one second divided by the note type.
     //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurationsD[thisNote];
      tone(8, deepdeepblue[thisNote], noteDuration);
      if (deepdeepblue[thisNote]==NOTE_C4)//led
      {
        digitalWrite(A0,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(A0,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_D4)
      {
        digitalWrite(2,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(2,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_E4)
      {
        digitalWrite(3,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(3,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_F4)
      {
        digitalWrite(4,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(4,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_G4)
      {
        digitalWrite(5,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(5,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_A5)
      {
        digitalWrite(6,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(6,LOW);
      }
      else if(deepdeepblue[thisNote]==NOTE_B5)
      {
        digitalWrite(7,HIGH);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        digitalWrite(7,LOW);
      }
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      
      // stop the tone playing:
      noTone(8);
      butnow=digitalRead(9);
      if(butnow==0&&butbefore==1)
      {
        songnum=songnum-1;
        thisNote=8;
      }
      butbefore==butnow;
  }
  }
}
