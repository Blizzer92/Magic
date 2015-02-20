#include "Objekt.h"
#include "Sprite.h"

	Objekt::Objekt(SDL_Texture* src, int x, int y, int width, int height){
		texture = src;
		setX(x);
		setY(y);
		setWidth(width);
		setHeight(height);
	}


		int Objekt::getX(){
			return x;
		}
		int Objekt::getY(){
			return y;
		}
		int Objekt::getWidth(){
			return width;
		}
		int Objekt::getHeight(){
			return height;
		}
		void Objekt::setX(int newx){
			x = newx;
		}
		void Objekt::setY(int newy){
			y = newy;
		}
		void Objekt::setWidth(int newwidth){
			width = newwidth;
		}
		void Objekt::setHeight(int newheight){
			height = newheight;
		}
		void Objekt::Draw(SDL_Renderer* ren){
			Sprite::Draw(ren, texture, x, y,width, height);
		}
