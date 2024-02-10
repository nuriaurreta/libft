/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:38:28 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:29:17 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodo;

	if (*lst == NULL)
		*lst = new;
	else
	{
		nodo = *lst;
		while (nodo->next != NULL)
			nodo = nodo->next;
		nodo->next = new;
	}
}
