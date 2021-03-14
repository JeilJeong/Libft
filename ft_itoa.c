/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:10:34 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/11 11:52:39 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_size(int n)
{
	int		size;
	long	tmp;

	size = 0;
	tmp = (long)n;
	if (tmp <= 0)
		size++;
	while (tmp != 0)
	{
		tmp /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	int		size;
	long	tmp;
	long	sign;
	char	*ptr;

	sign = 1;
	size = 0;
	tmp = (long)n;
	if (tmp < 0)
	{
		sign = -1;
		tmp *= -1;
	}
	size = ft_n_size(n);
	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ptr[size--] = '\0';
	while (size >= 0)
	{
		ptr[size--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (sign == -1)
		ptr[0] = '-';
	return (ptr);
}
