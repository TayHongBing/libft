/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:10:37 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/03 15:13:24 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*store;

	i = 0;
	store = (unsigned char *)b;
	while (i < len)
	{
		store[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
