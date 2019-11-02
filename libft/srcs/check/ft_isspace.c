/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:08:00 by bnoufel           #+#    #+#             */
/*   Updated: 2018/10/18 16:10:42 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\r' || c == '\n')
		return (1);
	if (c == '\v' || c == '\t')
		return (1);
	return (0);
}
