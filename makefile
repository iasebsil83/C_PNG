#executable
run: prog.o PNG.o
	gcc -Wall -o run prog.o PNG.o -lpng -O2
	rm -f *.o



#program
prog.o: src/prog.c lib/PNG.h
	gcc -Wall -c src/prog.c -O2



#PNG library
PNG.o: lib/PNG.c lib/PNG.h
	gcc -Wall -c lib/PNG.c -O2
