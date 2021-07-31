/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:00:55 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/04 14:34:18 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
	{
		return (0);
	}
	else
		return (1);
}
