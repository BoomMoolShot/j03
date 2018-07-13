/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:10:56 by abaisago          #+#    #+#             */
/*   Updated: 2018/07/11 16:25:36 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		string_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_len;
	int		src_len;

	i = 0;
	dest_len = string_len(dest);
	src_len = string_len(src);
	while (i < src_len)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
