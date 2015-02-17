test:
	make build;
	make run;

build:
	g++ -o test main.cpp -lSDL2;

run:
	./test;

clean:
	-rm test

