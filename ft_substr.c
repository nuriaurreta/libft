/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuria <nuria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:10:28 by nuria             #+#    #+#             */
/*   Updated: 2024/02/10 11:32:41 by nuria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	lens;

	lens = ft_strlen(s);
	if (len > lens)
		len = lens;
	if (start + len > lens)
		len = lens - start;
	if (start > lens)
		return (ft_strdup (""));
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == 0)
		return (0);
	ft_strlcpy (substr, &s[start], len + 1);
	return (substr);
}
