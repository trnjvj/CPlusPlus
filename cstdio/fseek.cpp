#include <cstdio>

int main()
{
	FILE* fp = fopen("example.txt","w+");
	char ch;

	fputs("Erica 25 Berlin", fp);
	rewind(fp);

	printf("Name: ");
	while((ch=fgetc(fp))!=' ')
		putchar(ch);
	putchar('\n');
	
	printf("Age: ");
	fseek(fp,10,SEEK_SET);
	while((ch=fgetc(fp))!=' ')
		putchar(ch);
	putchar('\n');

	printf("City: ");
	fseek(fp,15,SEEK_SET);
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	putchar('\n');

	fclose(fp);
	return 0;
}
