/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:05:19 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/11 17:29:26 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;
	size_t	size;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < little_len || len < little_len)
		return (NULL);
	size = big_len > len ? len : big_len;
	while (size-- >= little_len)
	{
		if (ft_memcmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
