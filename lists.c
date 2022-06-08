/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:01:41 by nguiard           #+#    #+#             */
/*   Updated: 2022/06/08 12:06:45 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/include/libft.h"

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("AAA");
	ft_lstadd_back(&list, ft_lstnew("BBB"));
}
