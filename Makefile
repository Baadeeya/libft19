# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgutin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 16:10:06 by dgutin            #+#    #+#              #
#    Updated: 2020/11/26 17:05:27 by dgutin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c \
			  ft_bzero.c \
			  ft_calloc.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isprint.c \
			  ft_itoa.c \
			  ft_memccpy.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memset.c \
			  ft_putchar_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_putstr_fd.c \
			  ft_split.c \
			  ft_strmapi.c \
			  ft_strchr.c \
			  ft_strnstr.c \
			  ft_strrchr.c \
			  ft_strdup.c \
			  ft_strjoin.c \
			  ft_strlcat.c \
			  ft_strlcpy.c \
			  ft_strlen.c \
			  ft_strncmp.c \
			  ft_strtrim.c \
			  ft_substr.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c \




SRCS_BONUS	= ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c \


OBJS		= ${SRCS:.c=.o} 

OBJS_BONUS	= ${SRCS_BONUS:.c=.o} 

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
			ar -rcs $@ $^

.c.o:
			${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

all:		${NAME}

bonus:		$(OBJS_BONUS)
			ar -rcs $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
