/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:53:55 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/04 17:54:05 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	front;
	size_t	back;
	size_t	i;

	front = 0;
	back = ft_strlen(s1) - 1;
	while (s1[front] != '\0' && is_in_set(s1[front], set))
		front++;
	while (s1[back] != '\0' && is_in_set(s1[back], set))
		back--;
	ptr = (char *)malloc((back - front) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (front < back)
	{
		ptr[i] = s1[front];
		i++;
		front++;
	}
	ptr[i] = '\0';
	return (ptr);
}
