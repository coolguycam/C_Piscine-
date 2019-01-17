/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:03:06 by cdimitro          #+#    #+#             */
/*   Updated: 2019/01/17 13:29:30 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char*)malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
		if (!str[i])
		{
			break ;
		}
	}
	dup[i] = str[i];
	return (dup);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
