all: target1

target1: target2
	@echo World!

target2:
	@echo "Hello"

staticlib:
	gcc -c lib_mylib.c -o lib_mylib.o
	ar rcs lib_mylib.a lib_mylib.o 
	gcc -c driver.c -o driver.o
	gcc -o driver driver.o -L. -l_mylib

dynalib:
	gcc -c -g -fPIC lib_mylib.c
	gcc -shared -o lib_mylib.dll lib_mylib.o
	gcc -o driver driver.c -L./ -l_mylib
	# gcc -c -g -fPIC *.c
	# gcc -shared -o liball.so *.o

clean:
	@echo "Cleaning up..."
	rm *.exe *.o *.a *.so *.dll