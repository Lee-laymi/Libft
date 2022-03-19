/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:21:22 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/19 12:06:10 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (ft_strlen(*s1) != ft_strlen(*s2))
		return (unsigned char (ft_strlen(*s1) - ft_strlen(*s2)));
	return (0);
}
