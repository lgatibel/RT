/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_str_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 10:58:12 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/09 13:49:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "libft.h"

int			vect_str_push
	(t_vect *v, char *s, size_t n)
{
	return (vect_push(v, s, ft_strlen(s), n));
}
