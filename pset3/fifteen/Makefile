#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

fifteen: fifteen.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o fifteen fifteen.c helpers.c -lcs50 -lm

clean:
	rm -f *.o a.out core fifteen
