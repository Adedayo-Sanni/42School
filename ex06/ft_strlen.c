/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:41:53 by asanni            #+#    #+#             */
/*   Updated: 2023/06/09 17:00:02 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	add;

	add = 0;
	while (str[add])
		add++;
	return (add);
}

// #include <unistd.h>
// // add 48 no return 

// int	main(void)
// {
// 	char	str[] = "dayo";
// 	int		b;

// 	b = ft_strlen(str);
// 	write(1, &b, 1);
// 	return (0);
// }
