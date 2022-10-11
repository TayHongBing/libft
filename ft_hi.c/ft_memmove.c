/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:09:48 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/03 17:11:21 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s_dst;
	char	*s_src;

	i = 0;
	s_dst = dst;
	s_src = src;
	if (dst < src)
	{
		while (i < len)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			s_dst[len] = s_src[len];
			len--;
		}
	}
	return (dst);
}
