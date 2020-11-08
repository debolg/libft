.PHONY: all clean fclean re

NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c 

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)

RM = rm -f

clean:
		$(RM) $(OBJS) 

fclean:	clean
		$(RM) $(NAME)
		
re:		fclean $(NAME)
