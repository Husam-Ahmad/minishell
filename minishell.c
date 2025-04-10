/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:48:57 by huahmad           #+#    #+#             */
/*   Updated: 2025/04/10 16:43:14 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

cmd_struct parse_command(char *str)
{
    char *copy = ft_strdup(str); //this is incase we want to recall the input later in case the user wants
    char *token;
    int i = 0;
    
    //10 is a random number idk how much memory i should allocate. malloc could be better idk. 
    //i think when using execve it will expect a NULL terminated array of args 
    cmd_struct *retvalue = ft_calloc(sizeof(cmd_struct) + 10 * sizeof(char*), 1);
    while ()
        retvalue->args[i--] = token; // the loop should continue until there are no more tokens
    retvalue->progname = retvalue->args[0];
    retvalue->redirect[0] = retvalue->redirect[1] = -1;
}

pipeline_struct parse_pipeline(char *str)
{
    char *copyofline = ft_strdup(str);
    char **cmd_str;
    int n_cmds = 0;
    int i = 0;
    char *cur = copyofline;
    pipeline_struct *retvalue;

    while (++*cur)
        if (*cur == '|') 
            n_cmds++;
    n_cmds++; //there is one more command than pipe chars
    retvalue = ft_calloc(sizeof(pipeline_struct) + n_cmds * sizeof(cmd_struct), 1);
    retvalue->n_cmds = n_cmds;
    cmd_str = ft_split(&copyofline, "|");
    while (i < n_cmds)
        retvalue->cmds[i++] = parse_comman(cmd_str[i]);
    return (retvalue);
}

ssize_t proinp(char* prompt, char **line, size_t *len)
{
    printf("%s", prompt);
    return getline(line, len, stdin);
}

int main(int ac, char **av, char **env)
{
    char *line = NULL;
    int len = 0;
    
    while(proinp("minishell>", &line, &len) > 0)
    {
        pipeline_struct pipeline = parse_pipeline(line);
        
    }
}