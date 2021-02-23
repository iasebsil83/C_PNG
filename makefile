#executable
run: prog.o PNG.o
	gcc -Wall -o run prog.o PNG.o -lpng -O2
	rm -f *.o



#program
prog.o: prog.c PNG.h
	gcc -Wall -c prog.c -O2



#PNG library
PNG.o: PNG.c PNG.h
	gcc -Wall -c PNG.c -O2
