/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 22:03:46 by aelphias          #+#    #+#             */
/*   Updated: 2020/04/14 21:32:59 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_push_params(int ac, char **av)
{
    t_list *head = NULL;
	t_list *tmp;
	int i;

	i = 1;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		insert_at_head(&head, tmp);
		i++;
	}
    return (head);
}
