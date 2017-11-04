/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 11:42:45 by ckanoa            #+#    #+#             */
/*   Updated: 2017/06/14 16:17:57 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char *ptr;

	ptr = (char*)str;
	while (*ptr != '\0')
	{
		if (*ptr != (char)c)
			ptr++;
		else
			return (ptr);
	}
	if (c == '\0')
		return (ptr);
	return (0);
}
