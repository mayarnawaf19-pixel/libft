/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:19:55 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/18 14:25:31 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	int		i;
	int		count;
	size_t	n;

	i = 0;
	ptr = (char *) s;
	n = ft_strlen(s);
	while (s[i])
	{
		if (ptr[i] == c)
		{
			ptr = malloc(n);
			count++;
		}
		i++;
	}
	return (ptr);
}
