# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s --trace-children=yes --track-fds=yes --log-file=valgrind.log ./test
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11
SOURSES = calculate.c parser.c polish_convert.c stack.c
OBJECTS = $(SOURSES:.c=.o)
SOURSE_TEST = tests.c
LIB = calc.a

UNAME =  $(shell uname -s)
FLAGS = 
ifeq ($(UNAME), Linux)
	FLAGS += -lcheck_pic -lm -lsubunit -lrt -lpthread
else
	FLAGS += -lcheck -lm
endif

all: gcov_report

install: $(LIB)
	cmake qt -B test
	cd test && make
	open test/qt.app

uninstall:
	rm -rf test

test: $(LIB) $(SOURSE_TEST)
	gcc $(SOURSE_TEST) $(CFLAGS) ./qt/libcalc.a -o testcalc $(FLAGS)
	./testcalc

calc.a: $(OBJECTS)
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)
	mv $(LIB) ./qt/libcalc.a
	make clean

calculate.o: calculate.c
	gcc calculate.c -c -o calculate.o

parser.o: parser.c
	gcc parser.c -c -o parser.o

polish_convert.o: polish_convert.c
	gcc polish_convert.c -c -o polish_convert.o

stack.o: stack.c
	gcc stack.c -c -o stack.o

gcov_report: $(LIB)
	gcc $(CFLAGS) $(SOURSE_TEST) -o testlcov --coverage $(SOURSES) $(FLAGS)
	./testlcov
	lcov -t "a.out" -o test.info -c -d .
	genhtml -o report test.info
	open ./report/index.html
	rm -rf test *.o *.a *gcda *gcno *info

valgrind: clean $(LIB)
	gcc $(SOURSE_TEST) $(CFLAGS) ./qt/libcalc.a -o testvalg $(FLAGS)
	valgrind --leak-check=full --track-fds=yes ./testvalg
	# grep ERROR valgrind.log

clean:
	rm -rf *.o *.a a.out *.dSYM testcalc testlcov *gcda report *gcno *info testvalg *.log