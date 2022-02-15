/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:31:31 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/15 21:05:23 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Fucking norminette doesn't let me comment where I want to
My true love is Moulinette2, who sadly, by default, inherits
Some of Moulinettes characteristics
*/

void	print2num(char a, char b)
{
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	
	if (a <= '9')
	{
		write(1, &a, 1);
	}

	if (a < 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = 1;
		while (j <= 99)
		{
			if (i < j && j < k)
			{
				print2num(i, j, k);
			}
			j++;
		}
		i++;
	}
}
