ejecutable: main.o aritmetica.o series.o constantes.o
	gcc -o ejecutable main.o aritmetica.o series.o constantes.o -lm
	clear
	./ejecutable

main.o: main.c
	gcc -c main.c

aritmetica.o: aritmetica.c
	gcc -c aritmetica.c

series.o: series.c
	gcc -c series.c

constantes.o: constantes.c
	gcc -c constantes.c

clean:
	rm *.o
	rm ejecutable
