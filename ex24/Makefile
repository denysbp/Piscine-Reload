CCFLAGS := -Wextra -Wall -Werror
NAME := libft.a
SRCS := srcs/
SRC = \
	$(SRCS)ft_putchar.c\
	$(SRCS)ft_putstr.c\
	$(SRCS)ft_strcmp.c\
	$(SRCS)ft_strlen.c\
	$(SRCS)ft_swap.c\

INCLUDES := includes/
OBJ = $(SRC:.c=.o)
all: $(NAME)

.c.o:
	cc $(CCFLAGS) -c -I$(INCLUDES) $< -o $(<:.c=.o) 

libft.a: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re