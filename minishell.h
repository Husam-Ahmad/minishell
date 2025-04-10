/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:49:07 by huahmad           #+#    #+#             */
/*   Updated: 2025/04/10 14:56:30 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <dirent.h>
#include <curses.h>
#include <term.h>
# include <sys/wait.h>
# include <limits.h>
# include <errno.h>
# include <signal.h>

# define STDIN 0
# define STDOUT 1
# define STDERR 2

//this struct is to represent a command and its arguments
typedef struct 
{
    char *progname;
    int redirect[2]; //redirect[i] should be used as fd i in the child process
    char *args[];     
}   cmd_struct;

//this one represents a pipline of commands, it should take the output from 
//cmd[i] to make it input in cmd[i+1] 
typedef struct 
{
    int n_cmds; //how many commands
    cmd_struct *cmds[]; // the actual commands
} pipeline_struct;

#endif