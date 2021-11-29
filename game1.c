#include "raylib.h"
#include <stdio.h>
#include "gm.h"
void Game1(Texture2D *background,int *enemyState,int *lightPower,Texture2D *darkness,Texture2D *lightness,int *timer,int *frameCounter,Sound *lightOpen)
{
    
    *frameCounter+=1;
    gameFrameCount+=1;

     
  
     
    if(*frameCounter>GetRandomValue(160,340)&&*enemyState!=5&&*timer>2000)
    {
    *enemyState+=1;
    *frameCounter=0;
    }else if(*frameCounter>GetRandomValue(30,240)&&*enemyState!=5&&*timer<=2000)
    {
        *enemyState+=1;
    *frameCounter=0;
    }

    if(*timer>0)
    *timer-=1;
    
    switch(*enemyState)
    {
        case 0:
        {
            if(phase0==1)
            {
                UnloadTexture(*background);
                phase4=1;
                 *background=LoadTexture("res/window.png");
                phase0=0;
                phase1=1;
            }
            
            
            
        }break;
        case 1:
        {
            if(phase1==1)
            {
                 UnloadTexture(*background);
                phase0==1;
                *background=LoadTexture("res/window(phase1).png");
                phase1=0;
                phase2=1;
            }
           
        }break;
        case 2:
        {
             if(phase2==1)
            {
                 UnloadTexture(*background);
                  phase1=1;
                *background=LoadTexture("res/window(phase2).png");
                phase2=0;
                phase3=1;
              
            }
            
        }break;
         case 3:
        {
             if(phase3==1)
            {
                 UnloadTexture(*background);
                phase2=1;
                *background=LoadTexture("res/window(phase3).png");
                phase3=0;
                phase4=1;
            }
            
            
        }break;
         case 4:
        {
             if(phase4==1)
            {
                 UnloadTexture(*background);
                      phase3=1;
                *background=LoadTexture("res/window(phase4).png");
                phase4=0;
                phase0=1;
            }
            
            
        }break;
        case 5:
        {
             UnloadTexture(*background);
            currentScreen=LOSE;
            *enemyState=0;
            *timer=4000;
            *lightPower=100;
            SaveFileText("FirstTime?","You lost in your first try didnt you :b"); 
        }break;
        
        
        
    }
    if(*timer<=0)
    {
        currentScreen=WIN;
        UnloadTexture(*background);
           *enemyState=0;
           if(FileExists("You Won."))
             *lightPower=200;
            else
            *lightPower=100;
            if(FileExists("Another_Reward_for_ya"))
           *timer=2000;
            else
            *timer=4000;
            if(!FileExists("You Won."))
             SaveFileText("You Won.","more light power :)");
             else
             SaveFileText("Another_Reward_for_ya","less time :)");
    }
    
     if(IsKeyPressed(KEY_A)&&*enemyState!=0&&*lightPower>0)
            {
                *enemyState-=1;
                
            }
    if(IsKeyPressed(KEY_A)&&*lightPower>0) PlaySound(*lightOpen);
    
    //render
    BeginDrawing();
    ClearBackground(RAYWHITE);
    //bakcground and light effect layers
     DrawTexture(*background,0,0,WHITE);
    
    if(IsKeyDown(KEY_A)&&*lightPower>0)
    {
       DrawTexture(*lightness,0,-100,WHITE);
        *lightPower-=1;
        DrawCircle(54,594,30,BLACK);
       
    }else 
    {
    DrawTexture(*darkness,0,0,WHITE);
    DrawCircle(54,594,30,RED);
    }
    
    //higher value layers
    DrawRectangle(800,29,*lightPower,50,WHITE);
    DrawText("A",47,587,20,BLACK);
    DrawText(TextFormat("%d",*timer),47,540,20,GREEN);
    DrawFPS(0,0);

    EndDrawing();
}
