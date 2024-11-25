#include <cstdio>

int main ()
{
    char fname[50], lname[50];
    char buffer[] = "Dennis Ritchie";

    sscanf(buffer, "%s %s", fname, lname);
    printf("First name : %s \nLast name : %s\n", fname, lname);

    return 0;
}
