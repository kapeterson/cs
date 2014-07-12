#include <stdio.h>

int main(){
	printf("OK \n");
	int i = 0x06;
	int j = 0x05;
	printf("J is %8d\n",j);
	int k = i & j;
	printf("Logical & = %3d\n",k);
	int l = i | j;
	printf("Logical | = %3d\n",l);

	// bit shift
	int z = 0x01;
        z = z << 1;
        printf("Z is %3d\n",z);
	z = z | ( z << 1);
	printf("Z is %3d\n",z);


	int r = ~0;
	printf("full mask is 0x%08x\n",r);
 	r = (r >> 2) << 2;
        printf("shifted r is 0x%08x\n",r);

}

