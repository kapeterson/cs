#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{



    int listenfd = 0, connfd = 0;
    struct sockaddr_in serv_addr; 


   char sendBuff[1025];
   char recvBuff[128];
	
    time_t ticks; 

    listenfd = socket(AF_INET, SOCK_STREAM, 0);

   int yes = 1;
    if (setsockopt(listenfd,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int)) == -1) { 
		perror("setsockopt"); 
		exit(1); 
	}  



    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(sendBuff, '0', sizeof(sendBuff)); 

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5001); 

    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

    listen(listenfd, 10); 

    while(1)
    {
		//printf("Listening\n");
        connfd = accept(listenfd, (struct sockaddr*)NULL, NULL); 
		//printf("Yep, connected\n");
		int n = 0;
		while ( (n = read(connfd, recvBuff, sizeof(recvBuff))) > 0)
		{
		
			recvBuff[n] = 0;
			printf("\nRX: %s", recvBuff);
			
		} 

		

	//printf("Closing\n");
	//char *ack = "OK\n";
	//send(connfd, ack, sizeof(ack),0);
        close(connfd);
        sleep(1);
     }
}
