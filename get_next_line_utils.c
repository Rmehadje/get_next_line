/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:15:27 by rmehadje          #+#    #+#             */
/*   Updated: 2023/07/19 17:03:19 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strjoin(const char *s1, const char *next_line)
{
	unsigned int i;
	unsigned int j;
	char		*d;

	d = (char *)malloc(ft_strlen(s1) + ft_strlen(next_line) + 1);
	if (d == 0)
	{
		free (d);
		return (0);
	}
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		d[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(next_line))
	{
		d[i] = next_line(j);
		i++;
		j++;
	}
	d[i] = '\0';
	return (d);
}
char	ft_strchr(const char *s, int c)
{
	size_t	i;
	char		*tmp;
	
	i = 0;
	tmp = (char *)s;
	while (i < ft_strlen(tmp))
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (0);
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t i;
	
	if (size != 0 && SIZE_MAX / size < nmemb)
		return (0)
	s = malloc(nmemb * size);
	if (s == 0)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		memory[i] = 0;
		i++;
	}
}
