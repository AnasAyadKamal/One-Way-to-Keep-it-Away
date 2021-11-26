#include "raylib.h"
#include <stdio.h>
#include "gm.h"

void Menu()
{
    
       if(IsKeyPressed(KEY_A)) currentScreen=GAME1;
    
     BeginDrawing();
    ClearBackground(BLACK);
    DrawText("The Only Way To Keep It Away",1,100,40,BLUE);
     DrawText("You are a Loser Who got Exclusive Printed NFTS And",1,250,30,WHITE);
     DrawText("There is a black figure outside your window",1,300,40,WHITE);
    DrawText("you saw him and called the police",1,350,40,WHITE);
     DrawText("but until they come",1,400,40,WHITE);
     DrawText("you have to make this thing far away from you",1,450,35,RED);
     if(FileExists("FirstTime?"))
      DrawText("Hint: flashing the light on him frequently will do the job",1,500,35,YELLOW);
        
    DrawText("Press A to Play",500,550,35,GREEN);
     DrawText("Made By Boxstop For The One Button Game Jam",1,610,5,BLUE);
    EndDrawing();
       
    
}
