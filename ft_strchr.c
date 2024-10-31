/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwautier <vwautier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:20:24 by vwautier          #+#    #+#             */
/*   Updated: 2024/10/28 17:04:29 by vwautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string != (unsigned char)searchedChar)
	{
		if (*string == '\0')
			return (NULL);
		string++;
	}
	return ((char *)&*string);
}

/*
if (!string)
		return (NULL);
*/