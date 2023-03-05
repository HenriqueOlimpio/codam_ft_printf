NAME	= libftprintf.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_hex.c\
		ft_itoa.c\
		ft_utoa.c\
		ft_pointer.c\
		ft_printf.c\
		ft_printf_utils.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_memcpy.c\

OBJS	= $(SRCS:.c=.o)

AR		= ar rc $(NAME) $(OBJS)

RM		= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(AR)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
