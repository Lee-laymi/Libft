/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:45:35 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/20 18:44:51 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			--s;
		if (*s != c && *s)
			++s;
	}
	return (count);
}

static int	ft_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_wword(const char *s, char c)
{
	char	*word;

	word = (char *)malloc(ft_wlen(s, c) + 1);
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, s, ft_wlen(s, c) + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**sp_word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	sp_word = (char **)malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (sp_word == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_wcount(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		sp_word[j] = ft_wword(&s[i], c);
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	sp_word[j] = 0;
	return (sp_word);
}
