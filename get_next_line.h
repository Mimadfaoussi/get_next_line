/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:42:39 by mfaoussi          #+#    #+#             */
/*   Updated: 2024/01/24 16:21:21 by mfaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>

typedef struct s_list{
	char			*text;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
char	*get_line_text(t_list *head);
void	create_list(t_list **head, int fd);
void	rearrange(t_list **head);
void	append(t_list **head, char *buffer);
t_list	*find_last_node(t_list *head);
int		include_newline(t_list *head);
void	copy_line(char *next_line, t_list *head);
void	free_all(t_list **head, char *buffer);
int		get_line_size(t_list *head);

#endif