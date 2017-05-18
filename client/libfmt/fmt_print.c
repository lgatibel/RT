/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 15:51:03 by qle-guen          #+#    #+#             */
/*   Updated: 2017/04/03 12:10:37 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfmt.h"
#include <unistd.h>

int		fmt_print(int fd, int ret, char *s, size_t n, ...)
{
	t_vect	a;
	va_list	l;

	va_start(l, n);
	vect_init(&a);
	fmt_fmt(&a, s, n, l);
	write(fd, a.data, a.used);
	free(a.data);
	va_end(l);
	return (ret);
}
