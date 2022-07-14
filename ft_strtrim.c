/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:27:39 by erhenriq          #+#    #+#             */
/*   Updated: 2022/06/26 17:17:36 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*str;

	if (!s1 || !set)
		return (0);
	first = 0;
	last = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while ((s1[last - 1] && ft_strchr(set, s1[last - 1])) && last >= first)
		last--;
	str = ft_substr(s1, first, last - first);
	if (!str)
		return (NULL);
	return (str);
}
