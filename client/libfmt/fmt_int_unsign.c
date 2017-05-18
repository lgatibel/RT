/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_int_unsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 15:23:48 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/06 11:10:08 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfmt.h"

void
	fmt_int_unsign
	(t_vect *a
	, unsigned base
	, unsigned long x)
{
	char	s[21];
	size_t	i;

	i = 20;
	if (!x)
		return ((void)vect_mset_end(a, '0', 1));
	while (x >= base)
	{
		s[i] = x % base;
		s[i] += (s[i] <= 9) ? '0' : 'a' - 10;
		x /= base;
		i--;
	}
	if (x)
		s[i--] = x + (x <= 9 ? '0' : 'a' - 10);
	i++;
	vect_add(a, s + i, 21 - i);
}
