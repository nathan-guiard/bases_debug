/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:04:36 by nguiard           #+#    #+#             */
/*   Updated: 2022/06/07 14:13:30 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	printf("str a l'entree de strlen: %s\n", str);
	while (str[i])
	{
		printf("str[%d] = %c\n", i, str[i]);
		i++;
	}
	printf("valeur de retour de strlen: %d\n\n", i);
	return (i);
}

void	ft_putstr(char *str)
{
	printf("str a l'entree de putstr: %s\n", str);
	write(1, str, ft_strlen(str));
	printf("\n\nFin de putstr\n");
}

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	printf("s2 au debut de strcpy: %s\n", s2);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	str[20];

	ft_strcpy(str, argv[1]);
	ft_putstr("Voici la chaine de caracteres:\n");
	ft_putstr(str);
	ft_putstr("\n");
}
