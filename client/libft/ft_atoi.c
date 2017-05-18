/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:30:39 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/04 12:21:48 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define LOW (ucase ? 'A' : 'a')

char
	*ft_atoi
	(char *s
	, unsigned long *n
	, int base
	, int ucase)
{
	while ((((*s >= '0' && *s < '0' + MIN(base, 10)))
		&& (base <= 10 || ((*s >= LOW && *s < LOW + base - 9)))))
	{
		*n = (*n * base) + (*s - (ft_isdigit(*s) ? '0' : LOW - 10));
		s++;
	}
	return (s);
}
