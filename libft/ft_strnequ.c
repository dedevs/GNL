/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vludan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:51:19 by vludan            #+#    #+#             */
/*   Updated: 2017/11/05 10:33:13 by vludan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		x;

	x = 0;
	if ((s1 == 0) || (s2 == 0))
		return (0);
	while (((s1[x] == s2[x]) != '\0') && (x < n - 1))
		x++;
	if ((s1[x] == s2[x]) || ((s1[x] == '\0') && (s2[x] == '\0')) || (n == 0))
		return (1);
	else
		return (0);
}
