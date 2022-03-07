/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:59:03 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/08 00:22:52 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while ( *s1 != '\0' && *s2 != '\0' && i < n )
	{
		if (*s1 != *s2)
			return (s1[i] - s2[i]);
		++i;

	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
