/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:52:35 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/19 16:21:15 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	s1_len;
	unsigned int	s2_len;
	size_t			i;
	size_t			j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = ((char *)malloc(sizeof(char) * (s1_len + s2_len + 1)));
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i++])
		str[i] = s1[i];
	while (s2[j++])
		str[i + j] = s2[j];
		str[i + j] = '\0';
	return (str);
}
