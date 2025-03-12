#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>

typedef s_client{
	int 	id;
	char	msg[100000];
} t_client;

t_client clients[2048];
int

