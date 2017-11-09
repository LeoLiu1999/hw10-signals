run: signal.c
	gcc signal.c
	./a.out

clean:
	rm a.out
	rm *~
	rm *#
