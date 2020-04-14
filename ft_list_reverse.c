/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 11:10:25 by aelphias          #+#    #+#             */
/*   Updated: 2020/04/08 22:38:01 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	t_list			*prev;
	t_list			*cur;
	t_list			*next;

	prev = NULL;
	cur = *begin_list;
	next = NULL;
	while (cur)
	{	
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*begin_list = prev;
} 
    