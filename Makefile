p.o:	p.c	gm.h	game1.c	lost.c	menu.c	win.c
	cc p.c -g -std=c99 -c -I /opt/raylib/src
game1.o:	gm.h	game1.c
	cc game1.c -g -std=c99 -c -I /opt/raylib/src 
menu.o:	gm.h	menu.c
	cc menu.c -g -std=c99 -c -I /opt/raylib/src
lost.o:	gm.h	lost.c
	cc lost.c -g -std=c99 -c -I /opt/raylib/src
win.o:	gm.h	win.c
	cc win.c -g -std=c99 -c -I /opt/raylib/src
a.out:	p.o	game1.o	lost.o	menu.o	win.o
	cc p.o game1.o lost.o win.o menu.o -s -Wall -std=c99 -I/opt/raylib/src -L/opt/raylib/release/libs/linux -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
clean:
	rm *.o

