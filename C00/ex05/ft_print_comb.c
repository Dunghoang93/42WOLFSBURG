/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhoang <nhoang@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:32:42 by nhoang            #+#    #+#             */
/*   Updated: 2021/02/21 11:21:10 by nhoang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0' - 1;
	while (++a[0] <= '7')
	{
		a[1] = a[0];
		while (++a[1] <= '8')
		{
			a[2] = a[1];
			while (++a[2] <= '9')
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (a[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
