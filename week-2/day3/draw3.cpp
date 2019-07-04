#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF , 0x00 , 0x00 , 0xFF );
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH * 0, SCREEN_HEIGHT * 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    SDL_SetRenderDrawColor(gRenderer, 0x00 , 0xFF , 0x00 , 0xFF );
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH, SCREEN_HEIGHT * 0, SCREEN_WIDTH * 0, SCREEN_HEIGHT);
}