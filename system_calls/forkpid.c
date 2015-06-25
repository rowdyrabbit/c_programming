#include<stdio.h>

int main() 
{
	fork();
	printf("\n Testing.. I am a process with ID %d\n", getpid());
}
