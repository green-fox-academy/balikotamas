#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw2 (SDL_Renderer* gRenderer, int x, int y) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF , 0x00 , 0x00 , 0xFF );
    SDL_RenderDrawLine(gRenderer, x, y, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
}
void draw(SDL_Renderer* gRenderer) {

   int x = 21;
   int y = 20;
    for (int i = 0; i < 3 ; ++i) {
        draw2(gRenderer, x, y);
        x += 96;
        y += 39;
    }
    }
