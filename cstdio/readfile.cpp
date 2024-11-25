#include <cstdio>

using namespace std;

int main()
{
	int c;
	FILE *fp;
	fp = fopen("file.txt", "r");
	if (fp)
	{
		while ((c = getc(fp)) != EOF)
			putchar(c);
		fclose(fp);
	}
	return 0;
}
