.PHONY: all clean fclean re

NAME = libft.a

SRCS = ft_isdigit.c ft_memset.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strncmp.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_strdup.c ft_atoi.c

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
			ar rc $(NAME) $(OBJS)

RM = rm -f

clean:
		$(RM) $(OBJS) 

fclean:	clean
		$(RM) $(NAME)
		
re:		fclean $(NAME)
