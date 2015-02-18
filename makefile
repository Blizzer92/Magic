test:
	make build;
	make run;

build:
	g++ -o test main.cpp Game.cpp Magiengine/Sprite.cpp Magiengine/Create.cpp -lSDL2 -Wno-write-strings;

run:
	./test;

clean:
	-rm test

