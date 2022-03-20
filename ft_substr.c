/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:09:42 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/20 12:56:58 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str || s_len < start)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		str[i] = s[start + 1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
