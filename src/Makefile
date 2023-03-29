CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11
UNAME = $(shell uname -s)
FLAGS = 

ifeq ($(UNAME), Linux)
	FLAGS += -lcheck_pic -lm -lsubunit -lrt -lpthread
else
	FLAGS += -lcheck -lm
endif

all: calc.a

cmake: calc.a
	cmake qt -B test
	cd test && make
	open test/qt.app

test: calc.a tests.c
	gcc $(CFLAGS) ./qt/libcalc.a tests.c -o testcalc $(FLAGS)
	./testcalc

calc.a: calculate.o parser.o polish_convert.o stack.o
	ar rc calc.a calculate.o parser.o polish_convert.o stack.o
	ranlib calc.a
	mv calc.a ./qt/libcalc.a
	make clean

calculate.o: calculate.c
	gcc calculate.c -c -o calculate.o

parser.o: parser.c
	gcc parser.c -c -o parser.o

polish_convert.o: polish_convert.c
	gcc polish_convert.c -c -o polish_convert.o

stack.o: stack.c
	gcc stack.c -c -o stack.o

gcov_report: calc.a
	gcc $(CFLAGS) tests.c -o testlcov --coverage calculate.c parser.c polish_convert.c stack.c $(FLAGS)
	./testlcov
	lcov -t "a.out" -o test.info -c -d .
	genhtml -o report test.info
	open ./report/index.html
	rm -rf test *.o *.a *gcda *gcno *info

clean:
	rm -rf *.o *.a a.out *.dSYM testcalc testlcov *gcda report *gcno *info