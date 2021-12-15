#include <stdio.h>
#include <netdb.h>
#include <cstdlib>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char **argv)
{
	struct sockaddr_in remote;
	struct hostent *h;
        int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	memset(&remote, sizeof(remote), 0);
	remote.sin_family = AF_INET;
	remote.sin_port = htons(atoi(argv[2]));
	if (! inet_aton(argv[1], &remote.sin_addr) )
	{
		perror("inet_aton(): ");
		exit(1);
        }

	int nret = connect(sock, (struct sockaddr*) &remote, sizeof(remote));
	if (nret < 0) {
		printf("PORT %s: closed\n", argv[2]);
		exit(1);
	}
	printf("PORT %s: open\n", argv[2]);
}
