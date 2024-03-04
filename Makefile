final: main.o ds.o base.o
	gcc obj/main.o obj/ds.o obj/base.o -o bin/C_Codebase

main.o: src/main.c
	echo "Compiling main.c"
	gcc -c src/main.c -o obj/main.o

ds.o: src/base/ds.c
	echo "Compiling ds.c"
	gcc -c src/base/ds.c -o obj/ds.o

base.o: src/base/base.c
	echo "Compiling base.c"
	gcc -c src/base/base.c -o obj/base.o

clean:
	echo "Removing objects and binaries"
	rm bin/*
	rm obj/*