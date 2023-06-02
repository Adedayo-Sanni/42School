/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:45:39 by asanni            #+#    #+#             */
/*   Updated: 2023/06/02 20:29:52 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_col(int colprinc, int max)
{
	char	um;
	char	dois;
	
	if (colprinc <= 9)
	{
		um = colprinc + 48;
		write(1, "0", 1);
		write(1, &um, 1);
	}
	else if(colprinc <= max)
	{
		um = colprinc + 48;
		dois = colprinc + 48;
		um = (colprinc % 10) + 48;
		dois = (colprinc /10) + 48;
		write(1, &dois, 1);
		write(1, &um, 1);
	}
}

void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	while (col1 <= 98)
	{
		col2 = col1 + 1;
		while (col2 <= 99)
		{
			ft_print_col(col1, col2);
			col2++;
		}
		col1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
