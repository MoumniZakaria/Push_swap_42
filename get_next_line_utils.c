/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:20:37 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 17:22:39 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		len;

	i = 0;
	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strchr(char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (s && *s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tbl;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (NULL);
	if (len >= ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	tbl = (char *)malloc(sizeof(char) * (len + 1));
	if (!tbl)
		return (NULL);
	while (i < len)
	{
		tbl[i] = s[start];
		i++;
		start++;
	}
	tbl[len] = '\0';
	return (tbl);
}
