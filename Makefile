all:
	clang++ -o bin/img2midi -I/opt/X11/include -L/opt/X11/lib -lX11 -L/usr/local/Cellar/jpeg/9b/lib -ljpeg img2midi.cpp
