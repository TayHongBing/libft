/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:35:24 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/04 18:37:51 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	check_sep(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
		if (charset[i++] == str)
			return (1);
	return (0);
}

static int	word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !check_sep(*str, charset))
			str++;
	}
	return (count);
}

static int	word_length(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	return (i);
}

static char	*combine_word(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * word_length(str, sep) + 1);
	if (!word)
		return (NULL);
	while (str[i] && !check_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		count;

	count = 0;
	arr = malloc(sizeof(char *) * word_count(str, charset) + 1);
	if (!arr)
		return (NULL);
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			arr[count] = combine_word(str, charset);
			count++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	arr[count] = 0;
	return (arr);
}

// int  main()
// {
// 	int		index = 0;
// 	char *str = "Hello World";
// 	char *charset = " ";
// 	char **split;

// 	split = ft_split(str, charset);

// 	while (split[index])
// 	{
// 		printf("tab[%d]: $%s$\n", index, split[index]);
// 		printf ("\n");
// 		index++;
// 	}

// 	free (split);
// 	return (0);
// }