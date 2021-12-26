/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:55 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:20:13 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
