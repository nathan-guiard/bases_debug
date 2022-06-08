# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 12:59:14 by nguiard           #+#    #+#              #
#    Updated: 2022/06/08 16:11:41 by nguiard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: normal.out
	gcc main.c -o normal.out

fsan: fsan.out
	gcc main.c -g -fsanitize=address -o fsan.out

lldb: lldb.out
	gcc main.c -g -o lldb.out

printf: printf.out
	gcc main_printf.c -o printf.out

list: list.out
	gcc lists.c libft.a -g -o list.out
	
clean:
	rm -f fsan.out normal.out lldb.out printf.out

.PHONY: normal.out fsan.out lldb.out printf.out list.out