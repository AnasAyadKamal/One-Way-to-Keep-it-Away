#include "raylib.h"
#include <stdio.h>
#include "gm.h"


void Lost()
{
    
  
   
     if(IsKeyPressed(KEY_A)) {currentScreen=MENU;
         
        
     }
    BeginDrawing();
    ClearBackground(BLACK);
     DrawText("The Figure Knocked You Out And",100,400,40,RED);
    DrawText("It ran away with Your Rare Printed NFTS :c",100,450,40,RED);
    DrawText("Press A to Conitnue",500,500,35,RED);
    EndDrawing();
    
    
}
