/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:06:43 by skrairab          #+#    #+#             */
/*   Updated: 2022/02/25 02:10:20 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#fndef LIBFT_H
# define LIBFT_H

#include <stdiob.h>
#include <unistd.h>

typdef struct s_list
{
	void	*content;
	struct s_list *next;
}	t_list;

int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

