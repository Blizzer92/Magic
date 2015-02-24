PACKAGES = sdl2
CXXFLAGS += `pkg-config --cflags $(PACKAGES)`
LDFLAGS  += `pkg-config --libs $(PACKAGES)`

CXXFLAGS += -I /usr/include/SDL2
LDFLAGS  += -lSDL2_image
