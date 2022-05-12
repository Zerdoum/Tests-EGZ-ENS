
# makefile de base pour compiler un fichier main.c en main.o

# nom du fichier qui implémente la loi du groupe
groupe = c19
#groupe = c21
#groupe = c21
#groupe = c3c15
#groupe = c2c16
#groupe = c4c8
#groupe = c2c2c4
#groupe = c2c2c6
#groupe = c2c2c8
#groupe = c2c2c10
#groupe = c2c12


CFLAGS= -c -Wall -Ofast 
#CFLAGS= -c -Wall -Ofast -march=sandybridge


all:	main.o set.o $(groupe).o
	gcc -o main main.o set.o $(groupe).o


set.o: set.c set.h
	gcc $(CFLAGS) set.c

$(groupe).o: $(groupe).c loi.h
	gcc $(CFLAGS) $(groupe).c

main.o:	main.c set.h loi.h
	gcc $(CFLAGS) main.c
clean:
	rm -f main_* *.o *~

run: main
	./main

