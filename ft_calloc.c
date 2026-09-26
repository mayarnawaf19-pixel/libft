/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 08:07:51 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/26 14:41:23 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, total_size);
	return (ptr);
}
