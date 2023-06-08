/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:41:42 by asanni            #+#    #+#             */
/*   Updated: 2023/06/07 18:47:40 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b ;
	*a = x;
	*b = y;
}

// #include <unistd.h>
// 	//add 48 em x e y na função ft
// 	write(1, a, 1);
// 	write(1, " ,", 1);
// 	write(1, b, 1);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	return (0);
// }
