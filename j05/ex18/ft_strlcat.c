/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:07:57 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/12 15:19:50 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				string_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		dest_len;
	unsigned int		src_len;

	i = 0;
	dest_len = string_len(dest);
	src_len = string_len(src);
	if (dest_len > size - 1)
		return (size + src_len);
	while (i < src_len && i < size - 1)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}
