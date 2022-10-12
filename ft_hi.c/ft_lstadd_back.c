/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thong-bi <thong-bi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:10:09 by thong-bi          #+#    #+#             */
/*   Updated: 2022/10/12 16:10:09 by thong-bi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(new)
	{
		if(!*lst)
			*lst = new;
		while (lst.next)
		{
			lst = lst.next;
			lst = new;
		}
	}
}
