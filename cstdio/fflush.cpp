#include <cstdio>
#include <cstring>

int main()
{
	int x;
	char buffer[1024];

	setvbuf(stdout, buffer, _IOFBF, 1024);
	printf("Enter an integer - ");

	fflush(stdout);

	scanf("%d",&x);
	printf("You entered %d", x);

	return(0);
}
