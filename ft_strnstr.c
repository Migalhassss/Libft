/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:01:44 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/31 12:01:44 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ch, size_t n)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (ch[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && j < n)
	{
		while (str[i + j] == ch[j] && i + j < n)
		{
			if (ch[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
