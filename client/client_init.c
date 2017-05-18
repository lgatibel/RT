/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:33:46 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/13 09:53:34 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_client.h"

int
	client_init
	(char *host_ip)
{
	int					sockfd;
	int					ret;
	int					port_offs;
	struct hostent		*host;
	struct sockaddr_in	sin;

	if ((host = gethostbyname(host_ip)) == NULL)
		return (ERR("cant get hostname", 0, 0));
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
		return (ERR("cant load socket", 0, 0));
	sin.sin_family = AF_INET;
	sin.sin_port = CLUSTER_PORT;
	sin.sin_addr = *((struct in_addr *)host->h_addr);
	port_offs = 0;
	while (port_offs <= 5 && (ret = connect(sockfd
		, (struct sockaddr *)&sin, sizeof(sin))) == -1)
	{
		close(sockfd);
		if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
			return (ERR("cant load socket", 0, 0));
		sin.sin_port = CLUSTER_PORT + ++port_offs;
	}
	if (ret == -1)
		return (ERR("cant connect to server", 0, 0));
	return (sockfd);
}
