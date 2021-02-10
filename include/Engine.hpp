#ifndef         __HPP__ENGINE__
#define         __HPP__ENGINE__

#include <SDL2/SDL.h>

class Engine {
    public:
        Engine(int _width, int _height);
        ~Engine();
        void run();
        static SDL_Renderer* renderer;
        void setFrameRate(double _frameRate);
    private:
        int height;
        int width;
        SDL_Window* window = nullptr;
        SDL_Renderer* renderer = renderer;
        double frameRate;
};

#endif