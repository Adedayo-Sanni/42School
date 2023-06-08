/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:41:53 by asanni            #+#    #+#             */
/*   Updated: 2023/06/07 21:19:48 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	add;

	add = 0;
	while (str[add])
		add++;
	return (add + 48);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char	str[4];
// 	int		b;

// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = 'c';
// 	b = ft_strlen(str);
// 	write(1, &b, 1);
// 	return (0);
// }
