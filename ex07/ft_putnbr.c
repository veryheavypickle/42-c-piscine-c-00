/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:53:35 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/16 14:01:07 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	/* printf("%d", c);*/
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		first_digit;
	char	chars[10];

	chars = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			nb *= -1;
		}
	}
	first_digit = nb;
	while (first_digit >= 10)
	{
		first_digit = first_digit / 10;
	}
	ft_putchar(first_digit + '0');
}

int	main(void)
{
	ft_putnbr(-42069);
}
