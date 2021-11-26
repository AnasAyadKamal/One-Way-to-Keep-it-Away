#include "raylib.h"
#include <stdio.h>
#include "gm.h"


void Win()
{
    if(IsKeyPressed(KEY_A)) currentScreen=MENU;
    
 BeginDrawing();
    ClearBackground(BLACK);
     DrawText("The Police Came :D",50,300,40,BLUE);
    DrawText("But They couldnt Find The black Figure",50,350,40,BLUE);
     DrawText("Then They Accused You By Saying That ",50,400,40,BLUE);
     DrawText("you were just Paranoided For your Printed NFTS ",50,450,35,BLUE);
     DrawText("Press A to Conitnue",500,500,35,BLUE);
     
    EndDrawing();
       
    
    
}
