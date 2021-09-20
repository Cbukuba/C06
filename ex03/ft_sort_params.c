/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:54:39 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/20 16:54:43 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (argv[i] < argv[i + 1])
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
		else
			ft_putstr(argv[i]);
		if (argv[i + 1] == '\0')
			write(1, "\n", 1);
		i --;
	}
}
