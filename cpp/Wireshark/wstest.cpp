#include <iostream>
#include <stdio.h>
#include <pcap.h>
#include <string>

/*
//	Compile with: g++ -L/usr/include/pcap wstest.cpp -lpcap
*/

using namespace std;

int main(int argc, char* argv[]){
	
	printf ("hello\n");
	string fname = "test.pcap";

	char errbuff[PCAP_ERRBUF_SIZE];

	pcap_t *pcap = pcap_open_offline(fname.c_str(), errbuff);

	struct pcap_pkthdr *header;
	const u_char *data;

	u_int packetCount = 0;

	while ( int returnValue = pcap_next_ex(pcap, &header, &data ) >= 0 ){

		printf("     Packet %d\n", packetCount);
		packetCount++;
	}

	printf("\nWe had a total of %d packets\n", packetCount);
	return 0;
}
