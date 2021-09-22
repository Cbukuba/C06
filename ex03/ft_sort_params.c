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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
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
	int		i;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		swap = 0;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
		}
		i ++;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
