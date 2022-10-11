/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:09:48 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/11 15:16:13 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*s_dst;
	const unsigned char	*s_src;

	i = 0;
	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			s_dst[len - 1] = s_src[len - 1];
			len --;
		}
	}
	else
	{
		while (i < len)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	return (dst);
}
