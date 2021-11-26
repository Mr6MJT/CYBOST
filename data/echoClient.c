#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <fcntl.h>
struct sockaddr_in server;
#define Port 9909
int main(int argc, char *argv[]) {
    printf(" ☢ Enter the ip of the server: \n");
    system("bash enter.sh");
    char ip[20];
    fgets(ip, 16, stdin);
    printf(" ☢ Enter the port: \n");
    char port[6];
    system("bash enter.sh");
    fgets(port, 6, stdin);
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock < 0)
    {
	printf(" ☢ socket() not created\n");
	exit(0);
    }
   // else
 //   {
//	printf(" ☢ socket() created\n");
    //}
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(atoi(port));
    memset(&server.sin_zero, 0, 8);
    int con = connect(sock, (struct sockaddr*) &server, sizeof(server));
    if (con < 0)
    {
	printf(" ☢ Failed to connect\n");
	exit(1);
    }
    printf(" ☢ Connected \n");
    char text[500] = {0};
    printf(" ☢ Enter text: ");
    fgets(text, 500, stdin);
    send(sock, text, strlen(text), 0);
    char buffer[500];
    recv(sock, buffer, 500, 0);
    printf(" ☢ From the server: %s\n");
    close(con);
    //printf(" ☢ \n");
}
