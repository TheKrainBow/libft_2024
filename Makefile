################################################################################
#                        Compilation flags and settings                        #
################################################################################

CC				=	cc
RM				=	rm -f
FLAGS			=	-Wall -Wextra -Werror#-fsanitize=address -g
INCLUDES		=	-I.
NAME			=	libft.a

################################################################################
#                                   Sources                                    #
################################################################################

SRCS			=	$(SRCS_PRINT)\
					$(SRCS_MEM)\
					$(SRCS_STRS)\
					$(SRCS_CHAR)\
					$(SRCS_CONVERTOR)\

SRCS_PRINT		=	ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_putnbr_fd.c\
					ft_putendl_fd.c\

SRCS_MEM		=	ft_memchr.c\
					ft_memcmp.c\
					ft_memcpy.c\
					ft_memmove.c\
					ft_memset.c\
					ft_bzero.c\
					ft_calloc.c\

SRCS_STRS		=	ft_strchr.c\
					ft_strdup.c\
					ft_striteri.c\
					ft_strjoin.c\
					ft_strlcat.c\
					ft_strlcpy.c\
					ft_strlen.c\
					ft_strmapi.c\
					ft_strncmp.c\
					ft_strnstr.c\
					ft_strrchr.c\
					ft_strtrim.c\
					ft_substr.c\
					ft_split.c\

SRCS_CHAR		=	ft_isalnum.c\
					ft_isalpha.c\
					ft_isascii.c\
					ft_isdigit.c\
					ft_isprint.c\
					ft_tolower.c\
					ft_toupper.c\

SRCS_CONVERTOR	=	ft_itoa.c\
					ft_atoi.c\

SRCS_BONUS		=	ft_lstadd_back.c\
					ft_lstadd_front.c\
					ft_lstclear.c\
					ft_lstdelone.c\
					ft_lstiter.c\
					ft_lstlast.c\
					ft_lstmap.c\
					ft_lstnew.c\
					ft_lstsize.c\

OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

################################################################################
#                                Makefile Rules                                #
################################################################################

.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

all: $(NAME)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re