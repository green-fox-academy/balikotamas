#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw2 (SDL_Renderer* gRenderer, int x, int y) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF , 0x00 , 0x00 , 0xFF );
    SDL_RenderDrawLine(gRenderer, x, y, (x + 50), (y + 50));
}
void draw(SDL_Renderer* gRenderer) {

    int x = 60;
    int y = 4;
    for (int i = 0; i < 3 ; ++i) {
        draw2(gRenderer,x, y);
        x += 50;
        y += 100;
    }
}
