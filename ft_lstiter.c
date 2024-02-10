/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:01 by nurreta           #+#    #+#             */
/*   Updated: 2024/02/10 11:29:32 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void custom_function(void *data)
{
	printf("%s\n", (char *)data);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lstaux;

	lstaux = lst;
	while (lstaux != NULL)
	{
		f((void *)lstaux->content);
		lstaux = lstaux->next;
	}
}
