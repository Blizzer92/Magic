test:
	make build;
	make run;

build:
	g++ -o test main.cpp PlayState.cpp Magiengine/Game.cpp Magiengine/Sprite.cpp -lSDL2 -Wno-write-strings;

run:
	./test;

clean:
	-rm test

