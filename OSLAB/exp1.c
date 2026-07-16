#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Current directory\n");
    system("pwd");
    printf("\nFiles\n");
    system("ls-l");
    printf("\nCreating directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("ls");
    printf("\nRemoving directory\n");
    system("rmdir Demo");
    return 0;
}