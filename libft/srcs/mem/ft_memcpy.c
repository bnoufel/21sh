/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 16:09:12 by bnoufel           #+#    #+#             */
/*   Updated: 2018/10/18 16:10:45 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	p_dst[i] = 0;
	return (dst);
}
