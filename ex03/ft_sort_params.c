/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rr-nithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:50:52 by rr-nithi          #+#    #+#             */
/*   Updated: 2019/07/16 16:16:26 by rr-nithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 1;
	while(s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;	
	}
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	int i;
	char *temp;

	i = 1;
	while(i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
		{
			i++;	
		}
	}
	i = 1;
	while  (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
