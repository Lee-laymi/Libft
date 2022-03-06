/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:39:58 by skrairab          #+#    #+#             */
/*   Updated: 2022/03/05 19:08:34 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "libft.h"

/*size_t	ft_strlen(const char *s);
int	main(void)
{
	//printf("%lu", strlen(NULL));
	printf("%zu", ft_strlen(NULL));
	
}
*/

int	main(void)
{
	printf("%d\n",atoi("99999999999999999999999999999"));
	printf("%d\n",atoi("0"));
	printf("%d\n",atoi("3523459"));
	printf("%d\n",atoi("-99999999999999999999999999999"));
	printf("%d\n",atoi("+-+--99999999"));
	printf("%d\n",atoi("999999999999999"));
	printf("%d\n",atoi("+999+99999-9999"));
	printf("%d\n",atoi("00000000000453463459"));
	return (0);
}

