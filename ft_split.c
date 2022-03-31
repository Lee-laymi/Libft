/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:45:35 by skrairab          #+#    #+#             */
/*   Updated: 2022/04/01 01:07:23 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	w_count(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i + 1);
}

int	str_count(char const *s, char c)
{
	int		a;

	a = 0;
	while (*s == c)
		s++;
	while (*s != '\0' && *s != c)
	{
		a++;
		s++;
	}
	return (a);
}

char	*w_chr(char const *s, char c)
{
	char	*wchr;
	int		l;

	l = str_count(s, c) + 1;
	while (*s == c)
		s++;
	wchr = (char *)malloc(sizeof(char) * (str_count(s, c) + 1));
	if (!wchr)
		return (NULL);
	ft_strlcpy(wchr, s, l);
	return (wchr);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		k;
	int		j;
	int		m;

	str = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1));
	j = w_count(s, c);
	k = 0;
	if (!str)
		return (NULL);
	while (j > 0 && *s)
	{
		m = str_count(s, c) + 1;
		str[k] = w_chr(s, c);
		while (*s == c && *s)
			s++;
		j--;
		k++;
		s = s + m;
	}
	str[k - 1] = NULL;
	return (str);
}
