#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>

#include <iostream>

#include "sdlLayer.h"

extern "C" __attribute__((visibility("default"))) __attribute__((used)) void call_me() {
    SDL_Init(SDL_INIT_AUDIO);
    Beeper b;
    b.beep(440, 100);
    b.wait();
    b.beep(560, 100);
    b.wait();
    b.beep(780, 100);
    b.wait();
}

int main() {
    call_me();
    return 0;
}
