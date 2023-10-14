SRC_FILES = \
 ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
 ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
 ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
 ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
 ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
 ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
 ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_BONUS = \
 ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
 ft_lstlast.c  ft_lstmap.c  ft_lstnew.c  ft_lstsize.c

OBJS = $(SRC_FILES:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

FLAGS = -Wall -Werror -Wextra

HEADER = libc.h

LIB = libft.a

.PHONY: all
all: $(OBJS) $(HEADER)
	ar rcs $(LIB) $^

.PHONY: bonus
bonus: $(OBJS) $(OBJS_BONUS) $(HEADER)
	ar rcs $(LIB) $^

%.o: %.c
	cc -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(LIB)

.PHONY: re
re: fclean all
