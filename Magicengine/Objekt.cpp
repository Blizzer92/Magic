#include "Objekt.h"
#include "Sprite.h"

	Objekt::Objekt(SDL_Texture* src, float x, float y, int width, int height){
		setTexture(src);
		setX(x);
		setY(y);
		setWidth(width);
		setHeight(height);
	}


		float Objekt::getX(){
			return x;
		}
		float Objekt::getY(){
			return y;
		}
		int Objekt::getWidth(){
			return width;
		}
		int Objekt::getHeight(){
			return height;
		}
        SDL_Texture* Objekt::getTexture(){
            return texture;
        }
		void Objekt::setX(float newx){
			x = newx;
		}
		void Objekt::setY(float newy){
			y = newy;
		}
		void Objekt::setWidth(int newwidth){
			width = newwidth;
		}
		void Objekt::setHeight(int newheight){
			height = newheight;
		}
        void Objekt::setTexture(SDL_Texture* tex){
        texture = tex;
        }
		void Objekt::Draw(SDL_Renderer* ren){
			Sprite::Draw(ren, texture, x, y,width, height);
		}
