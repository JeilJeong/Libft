/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:37:11 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/11 11:55:15 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_strtrim_lcpy(char const *s1, size_t start, size_t end)
{
	char	*ptr;

	if (start > end)
	{
		if (!(ptr = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*ptr = '\0';
	}
	else
	{
		if (!(ptr = (char *)malloc((end - start + 1) + 1)))
			return (NULL);
		ft_strlcpy(ptr, s1 + start, (end - start + 1) + 1);
	}
	return (ptr);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_isset(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_isset(s1[i], set) && i > ((ft_strlen(s1) / 2) - 1))
		i--;
	end = i;
	return (ft_strtrim_lcpy(s1, start, end));
}
