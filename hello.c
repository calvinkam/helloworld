#include <stdio.h>

int main(int argc,char* argv[])
{
	char* msg = "Hello World";
	msg[0] = 'f';
	printf("%s\n",msg);

	return 0;
}

