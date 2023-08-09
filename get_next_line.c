/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:21:06 by rmehadje          #+#    #+#             */
/*   Updated: 2023/07/22 16:52:40 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *get_next_line(int fd)
{
	int	bytes;
	char	*tmp;
	static char *stat;

	bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(stat), stat = NULL, NULL);
	while (bytes > 0)
	{
		tmp = ft_calloc(BUFFER_SIZE + 1);
		if (tmp == 0)
			return (0);
		bytes = read(fd, tmp, BUFFER_SIZE);
		if (bytes == -1)
			return (0);
		stat = ft_strjoin(stat, tmp);
		free(tmp);
		if (ft_strchr(stat, '\n'))
		{
			
		}
	}
}
