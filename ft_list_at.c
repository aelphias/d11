/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 20:04:05 by aelphias          #+#    #+#             */
/*   Updated: 2020/03/29 11:08:46 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list          *tmp;
    unsigned int    i;

    i = 0;
    tmp = begin_list;
    while (i < nbr && tmp != NULL)
    {   
        tmp = tmp->next;
        i++;
    }
    if (i != nbr)
        return (NULL);
    else
        return (tmp);
}