/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:05:57 by nurreta           #+#    #+#             */
/*   Updated: 2024/02/10 11:32:31 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	char			*last;

	c1 = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == c1)
			last = (char *)s;
		s++;
	}
	if (c1 == '\0')
		return ((char *)s);
	else
		return (last);
}
