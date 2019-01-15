/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:34:29 by cdimitro          #+#    #+#             */
/*   Updated: 2019/01/14 21:30:54 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	sign = 1;
	i = 0;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (sign*res);
}

int		main()
{
	char str[] = "7989";
	int val = ft_atoi(str);
	printf("%d", val);
	return (0);
}
