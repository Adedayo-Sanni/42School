/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:41:42 by asanni            #+#    #+#             */
/*   Updated: 2023/06/09 16:42:33 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// 	write(1, a, 1);
// 	write(1, " ,", 1);
// 	write(1, b, 1);
// 	//add 48 em div e mod na função ft

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	return (0);
// }
