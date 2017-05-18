/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_int_sign_32.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 15:24:56 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/09 15:25:20 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfmt.h"

void
	fmt_int_sign_32
	(t_vect *a
	, int base
	, int x)
{
	bool	neg;
	char	s[11];
	size_t	i;

	i = 10;
	neg = (x < 0);
	if (!x)
		return ((void)vect_mset_end(a, '0', 1));
	while ((x > 0 || x <= base) && ((x < 0) || (x >= base)))
	{
		s[i] = x % base;
		s[i] = ABS(s[i]);
		s[i] += (s[i] <= 9) ? '0' : 'a' - 10;
		x /= base;
		i--;
	}
	if (x)
		s[i--] = ABS(x) + (x <= 9 ? '0' : 'a' - 10);
	if (neg)
		s[i--] = '-';
	i++;
	vect_add(a, s + i, 11 - i);
}
