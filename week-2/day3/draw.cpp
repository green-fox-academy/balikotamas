#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer) {
   SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
   SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, SCREEN_HEIGHT * 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT);
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH * 0, SCREEN_HEIGHT / 2, SCREEN_WIDTH, SCREEN_HEIGHT /2);

}

