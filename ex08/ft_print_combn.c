/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:34:47 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/16 21:03:14 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢦⠙⢿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⢯⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⠛⢿⣿⣿⣿⣿⣿
⣿⣿⣿⢧⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡕⠂⠈⢻⣿⣿⣿⣿
⣿⣿⡅⣻⡿⢿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠿⢿⣿⡇⠀⠀⠈⣿⣿⣿⣿
⣿⣿⠀⠀⠀⠘⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⣹⣿⣿⣿
⣿⣿⠀⠀⠀⠀⣿⣿⡿⠿⠛⠻⣿⣿⣿⣿⡿⠟⠁⠈⠀⠉⠻⡆⠀⠀⠀⣿⣿⣿
⣿⣯⠄⠂⠀⠀⣿⡋⠀⢀⠀⠀⠀⠉⣿⣿⡀⠀⠀⠘⠓⣠⣶⣿⡀⠀⠀⠘⣿⣿
⣿⣫⡆⠀⠀⢀⣿⣷⣶⣄⠀⢀⣤⣴⣿⣿⣿⣶⣄⠀⣴⣿⣿⣿⠁⠀⠀⠀⠘⣿
⣿⣿⠁⠀⠀⡤⠙⢿⣿⣿⣷⣾⣿⡿⣿⣿⢿⠿⣿⣧⣿⣿⡿⢣⠀⠀⠀⠀⢠⣿
⣷⣌⠈⠀⠀⠀⠀⣆⠈⡉⢹⣿⣿⣆⡀⠀⠀⢠⣿⣿⣿⡿⢃⣼⠀⠀⠀⠀⣸⣿
⣿⣿⡇⠀⠀⠀⠀⠙⢿⣿⣆⠈⠛⠛⠛⠀⠀⠈⠉⠁⠀⢠⣿⠇⠀⠀⠀⠹⢿⡇
⣿⡫⠀⠀⠁⠀⠀⠀⠈⠻⣿⢢⣄⠀⠀⠀⠀⠀⣀⣠⣾⡾⠋⠀⠀⠀⠀⢀⠴⠋
⣿⣁⠄⠀⠀⠀⣀⠀⠀⠀⠈⠛⠿⣿⣿⣿⣿⣿⠿⡿⠋⠀⠀⠀⠀⠀⣀⠬⠆⢀
⣿⣿⣧⣄⠀⠀⠉⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠠⠙
	We live in a society where
	we cannot comment where we
	want.
*/

void	ft_putchar(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	print(char string[])
{
	int	i;

	i = 0;
	while (string[i] != '\0' && i < 2147483647)
	{
		write(1, &string[i], 1);
		i++;
	}
}

void	print_x_num(int x)
{
	int	num_array[10];
	int	i;

	num_array[0] = -1;
	i = 0;
	while (i < x)
	{
		num_array[i + 1] = i;
		i++;
	}
	i = 0;
	while (i < num_array[i])
	{
		if (num_array[i - 1] < num_array[i])
			ft_putchar(num_array[i]);
	}
}

void	ft_print_combn(int n)
{
	print_x_num(n);
}

int	main(void)
{
	ft_print_combn(2);
}
