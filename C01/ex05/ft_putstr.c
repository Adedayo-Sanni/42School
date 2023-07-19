/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:41:47 by asanni            #+#    #+#             */
/*   Updated: 2023/06/09 16:42:24 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	add;

	add = 0;
	while (str[add])
	{
		write(1, &str[add], 1);
	add++;
	}
}

// int	main(void)
// {
// 	char	str[4];

// 	str[0] = 'd';
// 	str[1] = 'a';
// 	str[2] = 'y';
// 	str[3] = 'o';
// 	ft_putstr(str);
// 	return (0);
// }
