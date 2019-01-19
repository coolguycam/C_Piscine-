/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 22:40:38 by cdimitro          #+#    #+#             */
/*   Updated: 2019/01/18 22:44:29 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ft_abs(Value)

int	ft_abs(int x)
{
	if (x == -2147483648)
		return (0);
	else
	{
		if (x >= 0)
			return (x);
		else
			return (-x);
	}
}
#endif
