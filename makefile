CC=gcc 
AR=ar
MAINOBJECTS=main.o
LIBOBJECTS=power.o basicMath.o myMath.h
FLAGS= -Wall -g 

all: mymathd mymaths mains maind

mains: $(MAINOBJECTS) libmyMath.a
	$(CC) $(flags) -o mains $(MAINOBJECTS) libmyMath.a
maind: $(MAINOBJECTS)
	$(CC) $(flags) -o maind $(MAINOBJECTS) ./libmyMath.so

mymathd: $(LIBOBJECTS)
	$(CC) -shared -o libmyMath.so $(LIBOBJECTS)
mymaths: $(LIBOBJECTS)
	$(AR) -rcs libmyMath.a $(LIBOBJECTS)

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o: power.c
	$(CC) -fPIC $(FLAGS) -c power.c
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean: 
	rm -f *.o mains maind libmyMath.so libmyMath.a

