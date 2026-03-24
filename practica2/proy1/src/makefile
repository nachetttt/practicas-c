CC = gcc
OBJETOS = aritmetica.o area.o main.o
CFLAGS = -I ../include
RM = rm -f

../bin/main3: $(OBJETOS)
	$(CC) $(OBJETOS)  -o $@ 

main.o: main.c
	$(CC) -c  $(CFLAGS) $< -o $@

area.o: area.c
	$(CC) -c $(CFLAGS) $< -o $@

aritmetica.o: aritmetica.c
	$(CC) -c $(CFLAGS) $< -o $@

clean: 
	$(RM) $(OBJETOS)
	 
install: 
	sudo cp ../bin/main3 /usr/local/bin

