/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:21:55 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/27 16:28:15 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	len;
	int		i;

	len = ft_strlen(s1) - 1;
	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	while (len > 0)
	{
		if (ft_strchr(set, s1[len]) == 0)
			break ;
		len--;
	}
	if ((int)len < i)
		return (ft_calloc(sizeof(char), 1));
	new_str = ft_substr((char *)s1, i, len - i + 1);
	return (new_str);
}
