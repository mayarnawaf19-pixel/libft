/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:48:11 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/15 10:01:40 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen (s1) + ft_strlen (s2);
	s3 = malloc (len + 1) * sizeof (char);
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i ++;
	}
	while (s[2] != '\0')
	{
		s3[i] = s2[j];
		i ++;
		j ++;
	}
	s[3] = '\0';
	return (s3);
}
