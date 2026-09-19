/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:29:04 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/19 14:22:15 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t	n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!des && !src)
		return (NULL);
	d = (unsigned char *) des;
	s = (const unsigned char *) src;
	while (n > 0)
	{
		*d = *s;
		d ++;
		s ++;
		n --;
	}
	return (des);
}
