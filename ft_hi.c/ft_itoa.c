/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:59:24 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/04 20:01:19 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>	

static int	len(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count++;
		nbr /= 10;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = len(n);
	str = (char *)malloc(sizeof(char) * length +1);
	if (!str)
		return (NULL);
	str[length--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n == -2147483648)
	{
		str[length--] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[length--] = 48 + (n % 10);
		n /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// }