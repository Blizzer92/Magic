#include "Object.h"

Object::Object(SDL_Texture* src, SDL_Renderer* ren, float x, float y)
{
    int w;
    int h;
    SDL_QueryTexture(src, NULL, NULL, &w, &h);
    setTexture(src);
    setX(x);
    setY(y);
    setWidth(w);
    setHeight(h);
    setRenderer(ren);
}

Object::Object(SDL_Texture* src, SDL_Renderer* ren, float x, float y, int width, int height)
{
    setTexture(src);
    setX(x);
    setY(y);
    setWidth(width);
    setHeight(height);
    setRenderer(ren);
}

float Object::getX(){
    return x;
}
float Object::getY(){
    return y;
}
int Object::getWidth(){
    return width;
}
int Object::getHeight(){
    return height;
}
SDL_Texture* Object::getTexture(){
    return texture;
}

SDL_Renderer* Object::getRenderer(){
    return ren;
}

void Object::setRenderer(SDL_Renderer* newren){
    ren = newren;
}

void Object::setX(float newx){
    x = newx;
}
void Object::setY(float newy){
    y = newy;
}
void Object::setWidth(int newwidth){
    width = newwidth;
}
void Object::setHeight(int newheight){
    height = newheight;
}
void Object::setTexture(SDL_Texture* tex){
    texture = tex;
}

bool Object::Draw()
{

    if(ren == NULL || texture == NULL)
    {
        return false;
    }

    SDL_Rect  destR;
    destR.x = x;
    destR.y = y;
    destR.w = width;
    destR.h = height;

    SDL_RenderCopy(ren, texture, NULL, &destR);

    return true;
}
