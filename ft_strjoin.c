/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:25:44 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:31:43 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	dstsize;

	if (s1 == 0 || s2 == 0)
		return (0);
	dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc((dstsize) * sizeof(char));
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, s1, dstsize);
	ft_strlcat(newstr, s2, dstsize);
	return (newstr);
}
