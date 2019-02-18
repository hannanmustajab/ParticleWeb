#include "application.h"
#line 1 "/Users/abdulhannanmustajab/Desktop/Particle/LightToggle/LightToggle/src/LightToggle.ino"
/*
 * Project LightToggle
 * Description:
 * Author:
 * Date:
 */

void setup();
int toggle(String command);
void loop();
#line 8 "/Users/abdulhannanmustajab/Desktop/Particle/LightToggle/LightToggle/src/LightToggle.ino"
int led= D7;


// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

  pinMode(led,OUTPUT);
 
  Particle.function("toggle",toggle);

}

int toggle(String command){

  if(command=="on"){
    digitalWrite(led,1);
    return 1;
  }
  else if(command=="off"){
    digitalWrite(led,0);
    return 1;
  }

}
// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}