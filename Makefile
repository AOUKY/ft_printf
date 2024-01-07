NAME	= libftprintf.a
SRCS   = ft_printf.c hex.c hexuper.c upnbr.c putads.c pnbr.c wrtc.c wrts.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall 

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

a:
	@gcc $(FLAGS) *.c -o aout
	@./aout
	@rm -f aout	