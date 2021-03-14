/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:41:49 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/12 02:17:33 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_u;
	unsigned char	*src_u;

	i = 0;
	if (!dest && !src)
		return (NULL);
	src_u = (unsigned char *)src;
	dest_u = (unsigned char *)dest;
	while (i < n)
	{
		dest_u[i] = src_u[i];
		i++;
	}
	return (dest);
}
