# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s --trace-children=yes --track-fds=yes --log-file=valgrind.log ./test
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11 -g
SOURSES = calculate.c parser.c polish_convert.c stack.c credit.c
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

all: install

install: $(LIB)
	cmake qt -B App
	cd App && make
	open App/qt.app

uninstall:
	rm -rf App

dvi:
	doxygen doxygen_file
	open ./Documentation/html/index.html

dist: clean uninstall
	tar -cvzf calc.tgz .	

test: $(LIB) $(SOURSE_TEST)
	gcc $(SOURSE_TEST) $(CFLAGS) ./qt/libcalc.a -o testcalc $(FLAGS)
	./testcalc

calc.a: $(OBJECTS)
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)
	mv $(LIB) ./qt/libcalc.a
	rm -rf *.o

calculate.o: calculate.c
	gcc $(CFLAGS) calculate.c -c -o calculate.o

parser.o: parser.c
	gcc $(CFLAGS) parser.c -c -o parser.o

polish_convert.o: polish_convert.c
	gcc $(CFLAGS) polish_convert.c -c -o polish_convert.o

stack.o: stack.c
	gcc $(CFLAGS) stack.c -c -o stack.o

credit.o: credit.c
	gcc $(CFLAGS) credit.c -c -o credit.o

gcov_report: $(LIB)
	gcc $(CFLAGS) $(SOURSE_TEST) -o testlcov --coverage $(SOURSES) $(FLAGS)
	./testlcov
	lcov -t "a.out" -o test.info -c -d .
	genhtml -o report test.info
	open ./report/index.html
	rm -rf test *.o *.a *gcda *gcno *info

valgrind: clean $(LIB)
	gcc $(SOURSE_TEST) $(CFLAGS) ./qt/libcalc.a -o testvalg $(FLAGS)
	valgrind --leak-check=full --track-origins=yes --track-fds=yes ./testvalg
	# grep ERROR valgrind.log

clean:
	rm -rf *.o ./qt/*.a a.out *.dSYM testcalc testlcov testvalg *gcda report *gcno *info *.log Documentation \
	build-qt-Desktop_x86_darwin_generic_mach_o_64bit-Debug *.tgz