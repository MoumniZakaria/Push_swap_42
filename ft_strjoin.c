/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:56:11 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/26 15:45:02 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	return (ft_strcpy(dup, (char *)src));
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*rst;
	size_t	len;

	i = 0;
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	rst = (char *) malloc(len + 1);
	if (!rst)
		return (NULL);
	while (ft_strlen(s1) && s1[i])
	{
		rst[i] = s1[i];
		i++;
	}
	j = 0;
	while (ft_strlen(s2) && s2[j])
		rst[i++] = s2[j++];
	if (s1)
		free(s1);
	return (rst[i] = '\0', rst);
}
