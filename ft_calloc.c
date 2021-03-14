/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:56:44 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/11 18:59:02 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bulk;
	void	*ptr;

	bulk = 0;
	bulk = nmemb * size;
	if (!(ptr = (void *)malloc(bulk)))
		return (NULL);
	return (ft_memset(ptr, 0, bulk));
}
