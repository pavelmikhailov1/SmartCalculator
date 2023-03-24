all: calc.a

cmake: calc.a
	cmake qt -B test
	cd test && make
	open test/qt.app

calc.a: maincalc.o parser.o polish_convert.o stack.o
	ar rc calc.a maincalc.o parser.o polish_convert.o stack.o
	ranlib calc.a
	mv calc.a ./qt/libcalc.a
	make clean

maincalc.o: maincalc.c
	gcc maincalc.c -c -o maincalc.o

parser.o: parser.c
	gcc parser.c -c -o parser.o

polish_convert.o: polish_convert.c
	gcc polish_convert.c -c -o polish_convert.o

stack.o: stack.c
	gcc stack.c -c -o stack.o

clean:
	rm -rf *.o *.a