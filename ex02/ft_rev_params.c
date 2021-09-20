/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:04:09 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/20 16:04:11 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	y;
	int	c;

	c = 0;
	while (c++ < size / 2)
	{
		i = 0;
		while (i < size / 2)
		{
			y = tab[i];
			tab[i] = tab[size - 1];
			tab [size - 1] = y;
			i ++;
			size --;
		}
	}
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c ++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i --;
	}
}
