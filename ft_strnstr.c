/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:54:21 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/25 12:36:17 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (haystack [i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& (i + j) < len
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (!needle [j])
			return ((char *) & haystack [i]);
		i++;
	}
	return (NULL);
}
