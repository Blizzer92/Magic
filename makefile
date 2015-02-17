test:
	make build;
	make run;

build:
	g++ -o test main.cpp Magiengine/Game.cpp Magiengine/Sprite.cpp -lSDL2;

run:
	./test;

clean:
	-rm test

