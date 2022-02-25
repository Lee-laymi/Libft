/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:18:57 by skrairab          #+#    #+#             */
/*   Updated: 2022/02/25 17:07:09 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
	{
		while (src[i])
			i++;
	return (i);
	}
	while (i < (destsize - 1) && (src[i] != '\0'))
			dst[i] == src[i]
			i++;
			return (i);
	if  (i < destsize)
	{
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
	}
}*/

#include<string.h>
#include<stdio.h>

int	main(void)
{
	char Hello[13] = "HellowWord42";
	char Dest[13];
	int	a;

	a = strlcpy(Dest,Hello,10);
	printf("%d\n", a );
	printf("%s\n", Dest);
}
