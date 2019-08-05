// Kerbal Space Program


int Tempo = 400; // Set up a tempo. I used this https://www.instructables.com/id/Arduino-Harry-Potter-Theme-Song/ for setting note lengths and to keep them in correct relation. See the code.


// Define notes and their frequencies.
#define C 523.25
#define E 659.25
#define F 698.46
#define G 783.99
#define la 880
#define Bb 932.33


int Buzzer = 11; 



void setup() {
  // put your setup code here, to run once:
pinMode(Buzzer, OUTPUT);

}
void sound(int pin, int note, int duration) { 
tone(pin, note, duration); 
delay(duration);
noTone; }

void loop() {
  // put your main code here, to run repeatedly:
sound(Buzzer, 659.25, 1000); // EHigh
sound(Buzzer, 523.25, 1000); //
sound(Buzzer, 783.99, 1000);
sound(Buzzer, 523.25, 333.33);
sound(Buzzer, 659.25, 333.33);
sound(Buzzer, 783.99, 333.33);
sound(Buzzer, 932.33, 1000);
sound(Buzzer, 880, 1000);
sound(Buzzer, 783.99, 1000);
sound(Buzzer, 523.25, 333.33);
sound(Buzzer, 659.25, 333.33);
sound(Buzzer, 783.99, 333.33);
sound(Buzzer, 932.33, 1000);
sound(Buzzer, 880, 1000);
sound(Buzzer, 783.99, 1000); 
sound(Buzzer, 523.25, 1000);
sound(Buzzer, 587.33, 1000);
sound(Buzzer, 698.46, 2000);
sound(Buzzer, 587.33, 500);
sound(Buzzer, 523.25, 500);











}
