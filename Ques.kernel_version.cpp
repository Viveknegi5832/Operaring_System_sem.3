#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	printf("\nKernel Version:\n");
	system("cat /proc/sys/kernel/osrelease");		

	printf("\nCPU type & Model:\n");
	system("cat /proc/cpuinfo | awk 'NR==4,NR==5 {print}'");	

	return 0;
}
