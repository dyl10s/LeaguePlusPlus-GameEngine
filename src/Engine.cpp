#include "Engine.hpp"

Engine::Engine(int _width, int _height) {
    this->height = _height;
    this->width = _width;
}

Engine::~Engine() {

}

void Engine::run() {

}

void Engine::setFrameRate(double _frameRate) {
    this->frameRate = _frameRate;
}    