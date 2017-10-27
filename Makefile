/* ********************************************************* */
/*                                                           */
/*   Author: jgonneau										 */
/*                                                           */
/* ********************************************************* */

NAME=libmyft.a

SRC=$(wildcard sources/*.c)

NOM=$(basename $(SRC))

OBJ=$(addsuffix .o, $(NOM))

INC=includes/

$(NAME):
	gcc -I $(INC) -c $(SRC)
	mv *.o sources
	ar rcs $(NAME) $(OBJ)
	rm -f $(OBJ)

all: $(NAME)

.PHONY: clean re

clean:
	rm -f libft.a

re: clean $(NAME)
