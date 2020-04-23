/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 14:20:45 by io                #+#    #+#             */
/*   Updated: 2020/04/23 20:10:19 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_list.h"

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%d - ",(int)head->data);
		head = head->next;
	}	
	printf("\n");
}

void	print_data(void *data)
{
	if (data)
		printf("%d - ", (int)data);
	printf("\n");
}

/* void	print_list_str(t_list *head)
{
	while (head != NULL)
	{
		printf("%s - ", (char *)head->data);
		head = head->next;
	}	
	if (head == NULL)
		printf("head == NULL\n");
} */

 void	insert_at_head(t_list **head, t_list *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
}

 void	f(void *data)
 {
	int tmp;

	tmp = (int)data;
	tmp++;
	data = (void *)tmp;
	printf("inside f  %d", tmp);
 }

 int	int_cmp(void *src, void *ref)
 {
	if ((*( int* )src) == (*( int*)ref))
	{
		printf("{4}\n");
		return (1);
	}
	else
		return (-1);
 }

int	main(void)
{
	t_list	*head;
	int		i;

	i = 0;
	head = NULL;
	while (i < 8)
		insert_at_head(&head, ft_create_elem((void *)i++));
	ft_list_foreach(head, print_data);
	ft_list_foreach_if(head, print_data, (void *)3, int_cmp);
 	return (0);
}
