#include <iostream>
#include <cstdlib>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

struct sockaddr_in server;

int main() {
    cout << " ☢ Enter your friend's ip:  \n";
    char ip[20];
    system("bash enter");
    fgets(ip, 16, stdin);
    
    cout << " ☢ Enter the port: \n";
    system("bash enter");
    char port[6];
    fgets(port, 6, stdin);
    cout << "\n";
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock < 0)
    {
        cout << " ☢ Socket() not created\n";
        exit(1);
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(atoi(port));
    memset(&server.sin_zero, 0, 8);
    int con = connect(sock, (struct sockaddr*) &server, sizeof(server));
    if (con < 0)
    {
	cout << " ☢ Doesn't connected\n";
	exit(1);
    }
    cout << " ☢ Connected\n";
    system("clear");
    for (int i = 0; i < 999999; i++)
    {
	system("bash red");
        cout << " ☢ Your friend is typing.. \n";
	char buffer[500];
	recv(sock, buffer, 500, 0);
	cout << " ✔ RECV: " << buffer;
	system("bash white");
        cout << " ☢ SEND: \n";
	system("bash enter");
        char text[500];
        fgets(text, 500, stdin);
	send(sock, text, strlen(text), 0);
        text[500] = {0};
        buffer[500] = {0};
    }
    close(sock);
}
