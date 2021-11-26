//game manager 
#include "raylib.h"


typedef enum GameScreen{ MENU,GAME1,WIN,LOSE   }GameScreen;
GameScreen currentScreen;
static int phase0=1;
static int phase1=0;
static int phase2=0;
static int phase3=0;
static int phase4=0;
static int gameFrameCount;
static int firstTime;

//functions
void Game1(Texture2D *background,int *enemyState,int *lightPower,Texture2D *darkness,Texture2D *lightness,int *timer,int *frameCounter,Sound *lightOpen);
void Lost();
void Win();
void Menu();
