/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:17:11 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:32:18 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;
	unsigned int	lendst;

	if (!s)
		return (0);
	lendst = ft_strlen(s);
	dst = malloc(lendst * sizeof(char) + 1);
	if (dst == 0)
		return (0);
	i = 0;
	while (i < lendst)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
