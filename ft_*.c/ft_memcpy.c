/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:49:46 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/03 15:52:42 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s_dst;
	char	*s_src;

	i = 0;
	s_dst = dst;
	s_src = src;
	if ((s_dst && s_src) != NULL)
	{
		while (i < n)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	return (dst);
}
