PACKAGES = sdl2
CXXFLAGS += -I/usr/include/SDL2
LDFLAGS += -L/usr/lib -lSDL2 -lSDL2_image

CXXFLAGS += -I/usr/include/
CXXFLAGS += -I/usr/include/SDL2
LDFLAGS  += -lSDL2_image
LDFLAGS += -lSDL2_ttf
LDFLAGS += -std=c++11
