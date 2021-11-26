cc p.c -g -std=c99 -c -I /opt/raylib/src -o p.o
cc game1.c -g -std=c99 -c -I /opt/raylib/src -o game1.o
cc lost.c -g -std=c99 -c -I /opt/raylib/src -o lost.o
cc win.c -g -std=c99 -c -I /opt/raylib/src -o win.o
cc menu.c -g -std=c99 -c -I /opt/raylib/src -o menu.o
cc p.o game1.o lost.o win.o menu.o -s -Wall -std=c99 -I/opt/raylib/src -L/opt/raylib/release/libs/linux -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
