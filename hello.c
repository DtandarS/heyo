// SDL and standard IO

#include <SDL3/SDL_main.h>
#include <SDL3/SDL.h>
#include <stdio.h>


// Screen dimension as constants

const int screenWidth = 800;
const int screenHeight = 600;


// Testing Error function


// Error types all in here

void ErrorCode1(){

  // This error appears whenever SDL could not initialize
  printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());

}

void ErrorCode2(){

  // This error appears whenver SDL can not create a window
  printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );

}


// This section houses all the components that are used for code

void SDLInitCheck(){

  SDL_Surface* screenSurface = NULL;


  //This will initialize SDL

  if (SDL_Init(SDL_INIT_VIDEO) == -1){

    ErrorCode1();
    return;      // <-- took me almost 30min to figure out how to end function without it proceeding outside if statement. This ensures that if the error occurs. The program won't try to proceed and writes the error on to the terminal

  } 

  printf(" The SDL was initialized succesfully");    // <-- might be unnecessary but this helps to confirm SDL initialization to the terminal.

}

void windowCreation (){

  SDL_Window* screenWindow = NULL;


  // Create window
  screenWindow = SDL_CreateWindow( "SDL Tutorial", screenWidth, screenHeight, SDL_WINDOW_BORDERLESS);

  if( screenWindow == NULL ) {

    ErrorCode2();
    return;

  }

  printf("Window Created Succesfully");

  // Get window surface
  screenSurface = SDL_GetWindowSurface (screenWindow);

  // Fill the surface white
  SDL_FillRect (ScreenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF,));

  // Uptade the surface
SDL_UpdateWindowSurface (screenWindow)

  // This keeps the window up and running
  SDL_Event e; bool quit = false; while ( quit == false ){ while ( SDL_PollEvent ( &r ) ){ if ( e.type == SDL_QUIT ) quit = true; }}

}


// main() function

int main(int argC, char* argS[]){

  SDLInitCheck();

  windowCreation();

}



