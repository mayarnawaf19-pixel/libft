/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 08:13:39 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/25 11:10:27 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen (s1);
	copy = malloc (sizeof (char) * (len + 1));
	if (!copy)
	{
		return (NULL);
	}
	ft_strlcpy (copy, s1, len + 1);
	return (copy);
}
