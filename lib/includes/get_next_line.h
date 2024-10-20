/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:26:46 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/17 21:52:35 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

size_t	get_next_line(int fd, char **line);
char	*ft_read_file(int fd, char *str);
char	*ft_next_str(char *str);
char	*ft_get_line(char *str);
char	*ft_memadd(char *s1, const char *s2, size_t size);

#endif