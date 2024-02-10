/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:20:51 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:30:58 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scopia;

	scopia = malloc(ft_strlen(s1) + 1);
	if (scopia == NULL)
		return (NULL);
	ft_strlcpy (scopia, s1, ft_strlen(s1) + 1);
	return (scopia);
}
