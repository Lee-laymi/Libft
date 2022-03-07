/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:41:47 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/08 00:44:53 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_ft(char *s, int fd)
{
	if (s != NULL)
		wirte(fd, s, ft_strlen(s));
	return (0);
}
