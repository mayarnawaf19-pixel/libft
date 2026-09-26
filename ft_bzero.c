/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:23:46 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/26 14:40:00 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n > 0)
	{
		*str = (unsigned char) c;
		str++;
		n--;
	}
	return (s);
}
