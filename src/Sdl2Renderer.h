#ifndef SDL2RENDERERH
#define SDL2RENDERERH

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>

#include "Actor.h"
#include "InputManager.h"

class Sdl2Renderer {    
    protected:
        int windowHeight;
        int windowWidth;
        std::string windowTitle;

        SDL_Window * window;
        SDL_Surface * screen;

        float scale;

    public:
        InputManager * inputManager;

        Sdl2Renderer(std::string winTitle, int winWidth, int winHeight);
        void start();
        void stop();
        void showActor(Actor * actor);
        bool processEventsAndWaitForExit();
};
#endif