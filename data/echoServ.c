#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
struct sockaddr_in server;
int main() {
    printf(" ☢ Enter your ip:  \n");
    char ip[20];
    system("bash enter");
    fgets(ip, 16, stdin);
    printf(" ☢ Enter the port: \n");
    char port[6];
    system("bash enter");
    fgets(port, 6, stdin);
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock < 0)
    {
	printf(" ☢ socket() not created\n");
	exit(1);
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(atoi(port));
    memset(&server.sin_zero, 0, 8);
    int bnd = bind(sock, (struct sockaddr*) &server, sizeof(server));
    if (bnd < 0)
    {
	    printf(" ☢ bind() error\n");
        exit(1);
    }
    int nRet = listen(sock, 5);
    if (nRet < 0)
    {
	    printf(" ☢ listen() error");
        exit(1);
    }
    printf(" ☢ Started listining\n");
    int c = sizeof(struct sockaddr_in);
    int acc = accept(sock, (struct sockaddr*) &server, (socklen_t*)&c);
    if (acc < 0)
    {
	    printf(" ☢ accept() failed\n");
	    exit(1);
    }
    printf(" ☢ accepted succesfully\n");
    char buffer[500];
    recv(acc, buffer, 500, 0);
    send(acc, buffer, strlen(buffer), 0);
    close(acc);
}
