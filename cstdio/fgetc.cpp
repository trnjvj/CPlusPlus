#include <cstdio>

int main()
{
    int c;
    FILE *fp;
    
    fp = fopen("file.txt","r");
    
    if (fp)
    {
        while(feof(fp) == 0)
        {
            c = getc(fp);
            putchar(c);
        }
    }
    else
        perror("File opening failed");
    fclose(fp);
    return 0;
}
