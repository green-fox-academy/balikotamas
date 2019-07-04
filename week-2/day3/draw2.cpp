#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer *gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, (double)SCREEN_WIDTH / 1.5, SCREEN_HEIGHT / 4);
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0x33 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 4, (double) SCREEN_HEIGHT / 1.25, (double)SCREEN_WIDTH / 1.5, (double)SCREEN_HEIGHT / 1.25);
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/),
            SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 4, (double) SCREEN_HEIGHT / 4, (double)SCREEN_WIDTH / 4, (double)SCREEN_HEIGHT / 1.25);
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0xFF /*B*/, 0xFF /*A*/),
            SDL_RenderDrawLine(gRenderer, (double)SCREEN_WIDTH / 1.5, (double)SCREEN_HEIGHT / 1.25, (double)SCREEN_WIDTH / 1.5, SCREEN_HEIGHT / 4);

}
