#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *fp;
    char buffer[100];
    
    fp = fopen("data.txt","rb");
    while(!feof(fp))
    {
        fread(buffer,sizeof(buffer),1,fp);
        cout << buffer;
    }
    
    return 0;
}
