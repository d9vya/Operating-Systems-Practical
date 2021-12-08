#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	printf("\nKernel Version:\n");
	system("cat /proc/sys/kernel/osrelease");
	printf("\nConfigured Memory:\n");
	system("cat /proc/meminfo | awk 'NR==1{print $2}'");
	printf("\nAmount of Free Memory:\n");
	system("cat /proc/meminfo | awk 'NR==2{print $2}'");
	printf("\nAmount of Used Memory:\n");
	system("cat /proc/meminfo | awk '{if(NR==1) a=$2; if(NR==2) b=$2} END {print a-b}'");

	return 0;
}
