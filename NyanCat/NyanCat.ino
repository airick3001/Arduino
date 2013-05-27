
 #include "pitches.h"


int intro[] = {
  //intro
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B5,
  NOTE_CS6,
  NOTE_DS6,
  NOTE_CS6,
  NOTE_AS5,
  NOTE_B5,
  NOTE_FS5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B5,
  NOTE_CS6,
  NOTE_AS5,
  NOTE_B5,
  NOTE_CS6,
  NOTE_E6,
  NOTE_DS6,
  NOTE_E6,
  NOTE_B5, 
  
  };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8, //13
  8,
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16 //25 intro
  };

void setup() {

  for (int thisNote = 0; thisNote < 25; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1500/noteDurations[thisNote];
    tone(8, intro[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}
  int melody[] = {
  //A
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_DS5,
  REST,
  NOTE_B4,
  NOTE_D5,
  NOTE_CS5,
  NOTE_B4,
  REST,
  NOTE_B4,
  NOTE_CS5,
  NOTE_D5,
  NOTE_D5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_B4,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_D5,
  NOTE_DS5,
  NOTE_D5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_D5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_DS5,
  REST,
  NOTE_B4,
  NOTE_D5, 
  NOTE_CS5,
  NOTE_B4,
  REST,
  NOTE_B4,
  NOTE_CS5,
  NOTE_D5,
  NOTE_D5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_B4,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_GS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_D5,
  NOTE_DS5,
  NOTE_D5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_D5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_FS5,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  NOTE_B4,
  NOTE_CS5,
  //end of loop
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_FS4,
  NOTE_DS4,
  NOTE_E4,
  NOTE_FS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_FS4,
  //
  NOTE_B4,
  NOTE_B4,
  NOTE_AS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_E4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B4,
  NOTE_AS4,
  //
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_CS5,
  NOTE_B4,
  NOTE_FS4,
  NOTE_DS4,
  NOTE_E4,
  NOTE_FS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_B4,
  NOTE_CS5,
  NOTE_DS5,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_FS4,
  NOTE_B4,
  NOTE_B4,
  NOTE_AS4,
  NOTE_B4,
  NOTE_FS4,
  NOTE_GS4,
  NOTE_B4,
  NOTE_E5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_B4,
  NOTE_CS5 
  
  };
  int melodyNoteDurations[] = {
  //a
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16, 
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  8,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16, 
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  8,
  //
  8,
  16,
  16,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  16,
  16,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  //
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  //
  8,
  16,
  16,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  16,
  16,
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  //
  8,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  16,
  8,
  8 
  };
void loop() {

  
    // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 216; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1400/melodyNoteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
}
}
