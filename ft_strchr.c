/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:24:36 by erhenriq          #+#    #+#             */
/*   Updated: 2022/06/20 15:53:20 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	compare;

	str = (char *)s;
	compare = (unsigned char)c;
	while (*str)
	{
		if (*str == compare)
			return (str);
		str++;
	}
	if (!compare && !*str)
		return (str);
	return (NULL);
}
