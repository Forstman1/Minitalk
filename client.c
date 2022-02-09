/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:38:37 by sahafid           #+#    #+#             */
/*   Updated: 2022/02/07 13:38:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/signal.h>




int main(int argc, char *argv[])
{
    int i;
    int fd;

    fd = (int)argv[1];
    printf("%d", fd);
    i = kill(fd, SIGUSR1);
    printf("\n%d", i);
    return 0;
}