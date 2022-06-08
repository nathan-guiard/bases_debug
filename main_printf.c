/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:04:36 by nguiard           #+#    #+#             */
/*   Updated: 2022/06/08 13:05:14 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	printf("str a l'entree de strlen: \033[1m%s\033[0m\n", str);
	while (str[i])
	{
		printf("str[%d] = %c (%d)\n", i, str[i], str[i]);
		i++;
	}
	printf("valeur de retour de strlen: %d\n", i);
	return (i);
}

void	ft_putstr(char *str)
{
	printf("str a l'entree de putstr: \033[1m%s\033[0m\n", str);
	write(1, str, ft_strlen(str));
	printf("\n\nFin de putstr\n");
}

int	main(int argc, char **argv)
{
	ft_putstr("Voici la chaine de caracteres:\n");
	ft_putstr(argv[1]);
	ft_putstr("\n");
}
