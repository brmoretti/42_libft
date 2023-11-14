NAME			=	libft.a
LIB				=	libft.a

CC				=	cc
CC_FLAGS 		=	-Wall -Werror -Wextra
INCLUDES		=	-I./include

AR				=	ar
AR_FLAGS		=	rcs

SRC_FILES		=	ft_atoi.c					\
					ft_bzero.c					\
					ft_calloc.c					\
					ft_isalnum.c				\
					ft_isalpha.c				\
					ft_isascii.c				\
					ft_isdigit.c				\
					ft_isprint.c				\
					ft_itoa.c					\
					ft_memchr.c					\
					ft_memcmp.c					\
					ft_memcpy.c					\
					ft_memmove.c				\
					ft_memset.c					\
					ft_putchar_fd.c				\
					ft_putendl_fd.c				\
					ft_putnbr_fd.c				\
					ft_putstr_fd.c				\
					ft_split.c					\
					ft_strchr.c					\
					ft_strdup.c					\
					ft_striteri.c				\
					ft_strjoin.c				\
					ft_strlcat.c				\
					ft_strlcpy.c				\
					ft_strlen.c					\
					ft_strmapi.c				\
					ft_strncmp.c				\
					ft_strnstr.c				\
					ft_strrchr.c				\
					ft_strtrim.c				\
					ft_substr.c					\
					ft_tolower.c				\
					ft_toupper.c

SRC_FILES_BONUS	=	ft_lstadd_back_bonus.c		\
					ft_lstadd_front_bonus.c		\
					ft_lstclear_bonus.c			\
					ft_lstdelone_bonus.c		\
					ft_lstiter_bonus.c			\
					ft_lstlast_bonus.c			\
					ft_lstmap_bonus.c			\
					ft_lstnew_bonus.c			\
					ft_lstsize_bonus.c


SRC_DIR			=	src
BUILD_DIR		=	build
SRCS			=	$(addprefix ./$(SRC_DIR)/, $(SRC_FILES))
SRCS_BONUS		=	$(addprefix ./$(SRC_DIR)/, $(SRC_FILES_BONUS)))
OBJS 			=	$(addprefix ./$(BUILD_DIR)/, $(SRC_FILES:.c=.o))
OBJS_BONUS		=	$(addprefix ./$(BUILD_DIR)/, $(SRC_FILES_BONUS:.c=.o))

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME) : $(BUILD_DIR) $(OBJS)
	@ echo $(LIB) "successfully generated"

bonus: $(BUILD_DIR) $(OBJS) $(OBJS_BONUS)
	@ echo $(LIB) "successfully generated including bonus functions"

$(BUILD_DIR):
	@ mkdir $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@ echo "$< -> $@"
	@ $(CC) $(CC_FLAGS) $(INCLUDES) -c $< -o $@
	@ $(AR) $(AR_FLAGS) $(LIB) $@

clean:
	@ rm -rf $(BUILD_DIR)
	@ echo "build directory have been cleaned"

fclean: clean
	@ rm -f $(LIB)
	@ echo "$(LIB) have been cleaned"

re: fclean all
