# Compile library files:

- gcc -c lib_mylib.c -o lib_mylib.o

# Create static library. This step is to bundle multiple object files in one static library:

- ar rcs lib_mylib.a lib_mylib.o 

# Compile the driver program:

- gcc -c driver.c -o driver.o

# Link the compiled driver program to the static library:

- gcc -o driver driver.o -L. -l_mylib

## References:

- https://www.cygwin.com/cygwin-ug-net/dll.html