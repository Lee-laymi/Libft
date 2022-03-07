/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:23:46 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/08 00:35:51 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		i = ft_strlen(needle);
		while (*haystack && i <= len--)
		{
			if (!(ft_strncmp(*haystack), *needle, i))
				return (*haystack);
			haystack++;
		}

	}
	return (NULL);
}
