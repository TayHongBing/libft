/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:01:51 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/03 18:03:04 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize > ft_strlen(dst))
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j < dstsize - ft_strlen(dst) - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ft_strlen(dst) + ft_strlen(src));
	}
	else
		return (ft_strlen(src) + dstsize);
}
