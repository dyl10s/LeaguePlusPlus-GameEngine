#ifndef         __H__INTERFACES__
#define         __H__INTERFACES__

#include <SDL2/SDL.h>

class GameObject {
    private:
        double x = 0;
        double y = 0;
};

class Updateable {
    public:
        virtual void update(double delta) = 0;
        virtual ~Updateable() = default;
};

class Drawable {
    public:
        virtual void draw() = 0;
        virtual ~Drawable() = default;
    protected:
        SDL_Rect* rect;
};

class UGameObject : public GameObject, public Updateable {

};

class DGameObject : public GameObject, public Drawable {

};

class DUGameObject : public GameObject, public Drawable, public Updateable {

};

#endif