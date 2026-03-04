NAME := ft_display_file
FILE := main.c
CCFLAGS := cc -Wall -Werror -Wextra 

all: ft_display_file 

ft_display_file: $(FILE)
	$(CCFLAGS)  $(FILE) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: fclean clean re all