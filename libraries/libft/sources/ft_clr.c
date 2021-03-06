/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:21:04 by bsouchet          #+#    #+#             */
/*   Updated: 2017/03/01 17:59:07 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			check_rgb_clr(cl_float3 clr)
{
	if (clr.x < .0 || clr.x > 255.0)
		return (0);
	if (clr.y < .0 || clr.y > 255.0)
		return (0);
	if (clr.z < .0 || clr.z > 255.0)
		return (0);
	return (1);
}

void		divide_clr(cl_float3 *clr)
{
	clr->x /= 255.0f;
	clr->y /= 255.0f;
	clr->z /= 255.0f;
}
