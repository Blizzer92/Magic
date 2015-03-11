#include "Object.h"
#include "Texture.h"
#include "Load.h"

	Object::Object(SDL_Texture* src, float x, float y, int width, int height){
		setTexture(src);
		setX(x);
		setY(y);
		setWidth(width);
		setHeight(height);
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
		void Object::Draw(SDL_Renderer* ren){
			Texture::Draw(ren, texture, x, y,width, height);
		}
