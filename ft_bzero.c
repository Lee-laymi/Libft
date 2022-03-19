/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:42:07 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/19 12:18:25 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = strlen(*s);
	str = char *(s);
	if (n == '0')
		return (s[i]);
	while ((s[i]) && (n < i))
	{
		str[i] = '0';
		i--;
		return (str[i]);
	}
	return (NULL);
}
