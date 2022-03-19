/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:39:48 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/19 11:30:34 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (!s1)
		return (NULL);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s1[i];
			i++;
	}
	dup[i] = '\0';
	return (dup);
}
