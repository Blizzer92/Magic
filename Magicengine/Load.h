/**
 * Class for Loading stuff
 */

#ifndef  _LOAD_H_
#define _LOAD_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <string>

class Load
{

    public:
        Load();
        /**
         * Lädt die Schrift mit Farbe
         * @param text String der Ausgegeben werden soll
         * @param font Pfad zur Font
         * @param color Farbe der Schrift
         * @param ren Der Renderer
         * @return TTF_Font*
         */
        static TTF_Font* Font(char* file, int size);

        /**
         * Laden der Texturen
         * @param pFile Pfad zur Datei
         * @param ren Pointer zum Renderer
         * @return Die Texture des Bildes
         */
        static SDL_Texture* Texture(char* pFile, SDL_Renderer* ren);
};

#endif
