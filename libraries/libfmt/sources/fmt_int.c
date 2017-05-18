/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 15:20:51 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/09 15:37:29 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfmt.h"

void
	fmt_int
	(t_vect *a
	, char **d
	, size_t *n
	, va_list l)
{
	char	*s;
	int		sign;
	t_u64	base;
	t_u64	bytes;

	sign = 0;
	base = 0;
	bytes = 0;
	if (**d == '-')
	{
		(*d)++;
		(*n)--;
		sign = 1;
	}
	s = STRTOB10(*d, base);
	if (*s == '/')
		s = STRTOB10(++s, bytes);
	*n -= s - *d;
	*d = s;
	if (sign)
		bytes == 4 ? fmt_int_sign_32(a, base, va_arg(l, t_i32))
			: fmt_int_sign_64(a, base, va_arg(l, t_i64));
	else
		fmt_int_unsign(a, base, va_arg(l, t_u64));
}
