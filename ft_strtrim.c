/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:21:55 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/20 12:58:46 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char const *set)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (len && ft_strchr(set, s1[i]))
		i--;
	str = ft_substr((char *)s1, 0, i + 1);
	return (str);
}
