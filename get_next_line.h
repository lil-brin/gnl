/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuravio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:19:40 by vmuravio          #+#    #+#             */
/*   Updated: 2018/02/28 13:16:33 by vmuravio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 3

int get_next_line(int fd, char **line);

#endif
