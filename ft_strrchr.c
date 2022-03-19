/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:48:46 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/19 11:06:06 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (*(s + i - 1) && i > 0)
	{
		if (*(s + i - 1) == (char)c)
		{
			return ((char *)(s + i - 1));
			i--;
		}
	}
	if (c == 0)
		return ((ft_strchr(s, 0)));
	return (NULL);
}
