#include<stdio.h>

int main()
{
    FILE *ptr;
    char Ch[100];

    ptr=fopen("Text.txt","a");

    if(ptr==NULL)
    {
        printf("File Does Not Opened Succesfully....");
        exit(1);
    }
    printf("File Opened Succesfully\n");
    printf("Enter The Sentence To Enter In File => ");
    gets(Ch);
    fprintf(ptr,"%s",Ch);
    fclose(ptr);

    return 0;


}
