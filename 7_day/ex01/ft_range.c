/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:13:04 by cdimitro          #+#    #+#             */
/*   Updated: 2019/01/17 13:07:00 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int			*ret;
	int			diff;
	int			i;

	if (min > max)
		return (0);
	i = 0;
	diff = max - min;
	ret = (int *)malloc(sizeof(*ret) * diff);
	while (i < diff)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
