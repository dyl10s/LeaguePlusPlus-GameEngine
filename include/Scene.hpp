#ifndef __H__SCENE__
#define __H__SCENE__

#include <vector>
#include <SDL/SDL2.h>
#include "Interfaces.hpp"
#include "Engine.hpp"
#include <utility>
#include <functional>

class Scene {
    public:
        void addUpdateable(Updateable* obj);
        void addDrawable(Drawable* obj);
        void AddEvent(SDL_Keycode key);
    private:
        std::vector<Updateable*> updateables;
        std::vector<Drawable*> drawables;
        std::vector<std::pair<SDL_Keycode, Callback>> keyEvents;
    friend class Engine;
};

#endif