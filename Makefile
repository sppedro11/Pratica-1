ALL = main

all: $(ALL)

main: function_distancia.o function_media.o function_ordenação.o main.o
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean: 
	rm -f *.s *.o output erro

distclean: clean
	rm -f $(ALL)
