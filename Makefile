.PHONY: build clean

build:
	gcc -c *.c
	gcc *.o -o bmp2ascii

clean:
	rm *.o
	rm bmp2ascii
