
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_parsing.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktlili <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:39:07 by ktlili            #+#    #+#             */
/*   Updated: 2018/10/05 18:35:37 by ktlili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

#include "minishell.h"


typedef enum	e_node_type
{
	e_pipe, sep, cmd
}				t_node_type;

typedef struct	s_tree
{
	t_node_type		type;
	t_command		*data;
	struct s_tree	*left;
	struct s_tree	*right;
}				t_tree;

int	ft_build_tree(char *line, t_tree **tree);
t_tree	*tr_new_node(int type);
int add_cmd(t_tree *node, t_tree **head);
int add_pipe(t_tree *node, t_tree **head);
int add_sep(t_tree *node, t_tree **head);
#endif
