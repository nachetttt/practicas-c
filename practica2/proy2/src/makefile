CC = gcc
OBJETOS = ../obj/cadenas.o ../obj/main.o
CFLAGS = -I ../include
RM = rm -f

../bin/main: $(OBJETOS)
	$(CC) -o $@ $(OBJETOS)
../obj/cadenas.o: cadenas.c
	$(CC) $(CFLAGS) -c $< -o $@
../obj/main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJETOS)
install:
	sudo cp ../bin/main /usr/local/bin
