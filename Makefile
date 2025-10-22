# Name of the output library
NAME = libft.a

# Compiler to use
CC = gcc

# Flags for the compiler (e.g. warnings)
CFLAGS = -Wall -Wextra -Werror

# List of source files (ft_*.c)
SRCS = 
ft_atoi.c
ft_bzero.c
ft_calloc.c
ft_isalnum.c
ft_isalpha.c
ft_isascii.c
ft_isdigit.c
ft_isalpha.c
ft_itoa.c
ft_lstadd_back.c
ft_lstadd_front.c
ft_lstclear.c
ft_lstdelone.c
ft_lstmap.c
ft_lstiter.c
ft_lstlast.c
ft_memset.c
ft_lstmap.c
ft_lstnew.c
ft_lstsize.c
ft_memchr.c
ft_memcpy.c
ft_memmove.c
ft_memset.c
ft_putchar_fd.c
ft_putstr_fd.c
ft_putendl_fd.c
ft_putnbr_fd.c
ft_putstr_fd.c
ft_strchr.c
ft_strdup.c
ft_striteri.c
ft_strjoin.c
ft_strlcat.c
ft_strlcpy.c
ft_strlen.c
ft_strmapi.c
ft_strncmp.c
ft_strnstr.c
ft_strrchr.c
ft_strtrim.c
ft_substr.c
ft_tolower.c
ft_toupper.c
ft_isprint.c
ft_split.c

# Object files - replace .c with .o
OBJS = $(SRCS:.c=.o)

# Header files (you can add if needed)
HEADER = libft.h

# Rules

all: $(NAME)   # Default target to build the library
	ar rcs $(NAME) $(OBJS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
