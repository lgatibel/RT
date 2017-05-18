/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iqsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 17:43:06 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/28 23:06:34 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_iqsort
	(int *t, size_t n, bool rev)
{
	size_t	i;
	size_t	j;
	int		p;
	int		tmp;

	if (n < 2)
		return ;
	p = t[n / 2];
	i = 0;
	j = n - 1;
	while (42)
	{
		while (rev ? p > t[i] : t[i] < p)
			i++;
		while (rev ? p < t[j] : t[j] > p)
			j--;
		if (i >= j)
			break ;
		tmp = t[i];
		t[i] = t[j];
		t[j--] = tmp;
		i++;
	}
	ft_iqsort(t, i, rev);
	ft_iqsort(t + i, n - i, rev);
}
