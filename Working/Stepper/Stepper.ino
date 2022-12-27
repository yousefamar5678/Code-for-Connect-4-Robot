#include <Stepper.h>

#define st1 4
#define st2 5
#define st3 6
#define st4 7
Stepper mystp(2048,st1,st2,st3,st4) ;
int n = 1; //counter
bool l= true;  

void setup() {
    pinMode (st1, OUTPUT);
    pinMode (st2, OUTPUT);
    pinMode (st3, OUTPUT);
    pinMode (st4, OUTPUT);

}


void loop(){
  
}

void fwd(){
  if (n == 4) {           digitalWrite (st1, HIGH);     digitalWrite (st2, LOW);      digitalWrite (st3, LOW);      digitalWrite (st4, LOW);      n = 3;    }
  else if (n == 3) {      digitalWrite (st1, LOW);      digitalWrite (st2, HIGH);     digitalWrite (st3, LOW);      digitalWrite (st4, LOW);      n = 2;    }
  else if (n == 2) {      digitalWrite (st1, LOW);      digitalWrite (st2, LOW);      digitalWrite (st3, HIGH);     digitalWrite (st4, LOW);      n = 1;    }
  else if (n == 1) {      digitalWrite (st1, LOW);      digitalWrite (st2, LOW);      digitalWrite (st3, LOW);      digitalWrite (st4, HIGH);     n = 4;   };
  delay(5); 
}



void rev() {
  if (n == 1) {           digitalWrite (st1, HIGH);     digitalWrite (st2, LOW);      digitalWrite (st3, LOW);      digitalWrite (st4, LOW);      n = 4;    }
  else if (n == 2) {      digitalWrite (st1, LOW);      digitalWrite (st2, HIGH);     digitalWrite (st3, LOW);      digitalWrite (st4, LOW);      n = 1;    }
  else if (n == 3) {      digitalWrite (st1, LOW);      digitalWrite (st2, LOW);      digitalWrite (st3, HIGH);     digitalWrite (st4, LOW);      n = 2;    }
  else if (n == 4) {      digitalWrite (st1, LOW);      digitalWrite (st2, LOW);      digitalWrite (st3, LOW);      digitalWrite (st4, HIGH);     n = 3;   };
  delay(5); 
}