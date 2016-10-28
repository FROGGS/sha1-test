all:
	gcc -c -fPIC -o sha1.o sha1.c
	ar rcs libsha1.a sha1.o
	gcc -o test test.c -I. -L. -lsha1
	./test
