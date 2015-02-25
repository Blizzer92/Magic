PACKAGES = sdl2 sdl2_image
CXXFLAGS += `pkg-config --cflags $(PACKAGES)`
LDFLAGS  += `pkg-config --libs $(PACKAGES)`
