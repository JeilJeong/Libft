/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 18:22:59 by jejeong           #+#    #+#             */
/*   Updated: 2020/12/11 23:08:14 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			size++;
		i++;
	}
	return (size);
}

static int			ft_split_len(char const *s, char c)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void			*ft_split_free(char **ptr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static char			**ft_split_cpy(char const *s, char c, char **ptr, int size)
{
	int	i;
	int	j;
	int len;

	i = -1;
	while (++i < size)
	{
		while (*s == c)
			s++;
		len = ft_split_len(s, c);
		if (!(ptr[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_split_free(ptr, i));
		j = 0;
		while (j < len)
			ptr[i][j++] = *s++;
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}

char				**ft_split(char const *s, char c)
{
	char	**ptr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_size(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	ptr = ft_split_cpy(s, c, ptr, size);
	return (ptr);
}
