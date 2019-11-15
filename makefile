CC=gcc 
AR=ar
Main_O=main.o
Lib_O=power.o basicMath.o myMath.h
FLAGS= -Wall -g 

all: mymathd mymaths mains maind

mains: $(Main_O) libmyMath.a
	$(CC) $(flags) -o mains $(Main_O) libmyMath.a
maind: $(Main_O)
	$(CC) $(flags) -o maind $(Main_O) ./libmyMath.so

mymathd: $(Lib_O)
	$(CC) -shared -o libmyMath.so $(Lib_O)
mymaths: $(Lib_O)
	$(AR) -rcs libmyMath.a $(Lib_O)

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o: power.c
	$(CC) -fPIC $(FLAGS) -c power.c
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean: 
	rm -f *.o mains maind libmyMath.so libmyMath.a

