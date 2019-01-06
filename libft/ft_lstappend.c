/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdontos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 10:22:26 by tdontos-          #+#    #+#             */
/*   Updated: 2019/01/04 11:15:47 by tdontos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **begin_list, t_list *new)
{
	t_list *current;

	current = *begin_list;
	if (current == NULL)
		*begin_list = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
}
