/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 18:54:24 by aelphias          #+#    #+#             */
/*   Updated: 2020/04/14 21:32:28 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *tmp;
    
    tmp = NULL;
    while (*begin_list)
    {
        tmp = ft_list_last(*begin_list);
        tmp->next = NULL;
        tmp->data = NULL;
        tmp = NULL;
    }
    *begin_list = NULL;
}