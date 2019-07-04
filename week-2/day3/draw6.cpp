#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_Rect fillRect = { SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 -50, 100, 100};
    SDL_RenderFillRect( gRenderer, &fillRect );
}
