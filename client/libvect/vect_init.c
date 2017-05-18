/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:04:40 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/31 14:23:47 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/malloc.h"
#include "../libft/libft.h"

void
	vect_init
	(t_vect *v)
{
	v->data = NULL;
	v->used = 0;
	v->total = 0;
}
