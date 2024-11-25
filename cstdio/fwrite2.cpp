#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int retVal;
    FILE *fp;
    char buffer[] = "Writing to a file using fwrite.";

    fp = fopen("myfile.txt","w");
    
    retVal = fwrite(buffer,sizeof(buffer),0,fp);
    cout << "When count = 0, fwrite returned " << retVal << endl;
    
    retVal = fwrite(buffer,0,1,fp);
    cout << "When size = 0, fwrite returned " << retVal << endl;
    
    return 0;
}
