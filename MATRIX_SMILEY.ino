/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit; vous pouvez le distribuez et/ou le modifier.     /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include "LedControl.h"

LedControl lc=LedControl(12,11,10,1);  // Pins: DIN,CLK,CS, N° of Display connected

unsigned long delayTime=1000;  // Delay between Frames

//////////////////////////////////////////////////////////////////////////////////////
void setup()
{
  lc.shutdown(0,false);  // Wake up displays
  
  lc.setIntensity(0,5);  // Set intensity levels
  
  lc.clearDisplay(0);  // Clear Displays
 
}

void loop()
{
    image1a();
    delay(delayTime);

    image1a();
    delay(delayTime);

    image1a();
    delay(delayTime);
   
    image1b();
    delay(delayTime);

    image1c();
    delay(delayTime);
    
    image1c();
    delay(delayTime);

    image1b();
    delay(delayTime);
    
    image1a();
    delay(delayTime);

    image1a();
    delay(delayTime);

    image1a();
    delay(delayTime);
   
    image1b();
    delay(delayTime);
}
////////////////////////////////////////////////////////////
void image1a()
{
	byte smiley1a[] =
{
   B00101111,  //Smiley #1
   B00101111,
   B01101111,
   B11000000,
   B11000000,
   B01101111,
   B00101111,
   B00101111
};
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,smiley1a[i]);
  }
}

void image1b()
{
	byte smiley1b[] =
{
   B00100100,  // Smiley #2
   B00100100,
   B01100100,
   B11000000,
   B11000000,
   B01100100,
   B00100100,
   B00100100
};
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,smiley1b[i]);
  }
}

void image1c()
{
	byte smiley1c[] =
{
   B00001001,  // Smiley #3
   B00001111,
   B01000110,
   B10100000,
   B10100000,
   B01001001,
   B00001111,
   B00000110
};
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,smiley1c[i]);
  }
}