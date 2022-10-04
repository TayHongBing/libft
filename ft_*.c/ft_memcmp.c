/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:51:48 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/03 19:52:01 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p_s1;
	const char	*p_s2;

	i = 0;
	p_s1 = s1;
	p_s2 = s2;
	while ((p_s1[i] != '\0' || p_s2[i] != '\0') && i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "ABCDEF", 6);

//    ret = ft_memcmp(str1, str2, 5);

//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }

//    return(0);
// }