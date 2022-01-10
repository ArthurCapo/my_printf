##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC =       lib/my/my_putchar.c \
      lib/my/my_put_nbr.c \
      lib/my/my_putstr.c \
      lib/my/my_printf.c \

OBJ = my_printf.o \
	  my_put_nbr.o \
	  my_putchar.o \
	  my_putstr.o \

NAME = libmy.a

all: compil_lib test_run

compil_lib:
	gcc -c $(SRC) -Iinclude -lmy
	ar rc $(NAME) $(OBJ)

test_run:
	gcc -o unit_tests tests/test_criterion.c -lcriterion --coverage -Iinclude -L. -lmy

clean:
	rm $(OBJ)
	rm unit_tests
	rm libmy.a

fclean:	clean
	rm -f $(NAME)

re:	 fclean all
