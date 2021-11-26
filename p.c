/*
This project might get removed from my to do list
Tho it was fun and very informative of a project



*/
#include "raylib.h"
#include <stdio.h>
#include "gm.h"



 
 
int main(void)
{
    const int screenWidth=1024;
    const int screenHeight=654;
    
    InitWindow(screenWidth,screenHeight,"One Button!");
    InitAudioDevice();
    Sound lightOpen=LoadSound("res/light.mp3");
    currentScreen=MENU;
    

    Texture2D background=LoadTexture("res/window.png");
    Texture2D darkness=LoadTexture("res/darkness.png");
    Texture2D lightness=LoadTexture("res/lightinthedarkness.png");
    int enemyState=0;
    int timer=4000;
    //its 4000
    int frameCounter=0;
    int lightPower=100;
 
    SetTargetFPS(60);
 while(!WindowShouldClose())
 {
     switch(currentScreen)
     {
         case MENU:
         {
             Menu();
         }break;
         case GAME1:
         {
             Game1(&background,&enemyState,&lightPower,&darkness,&lightness,&timer,&frameCounter,&lightOpen);
         }break;
         case WIN:
         {
             Win();
         }break;
         case LOSE:
         {
              
             Lost();
             
         }break;
     }
        
    


 }
 UnloadTexture(background);
 UnloadTexture(darkness);
 UnloadTexture(lightness);
 
 CloseWindow();
    
}


 
