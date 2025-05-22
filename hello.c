// SDL and standard IO

#include <SDL.h>
#include <stdio.h>


// Screen dimension as constants

const int screenWidth = 800;
const int screenHeight = 600;


// main() function

int main(int argC, char* argS[]){

  SDL_Window* screenWindow = NULL;

  SDL_Surface* screenSurface = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) < 0){

    ErrorCode1()

  } 

}

int ErrorCode1(){

  printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
  
}

