#include<stdio.h>

int main()
{
    FILE *ptr;
    char Ch='\0';

    ptr=fopen("Text.txt","r");

    if(ptr==NULL)
    {
        printf("File Does Not Opened Succesfully....");
    }
    else
    {
        printf(" File Opened Succesfully\n");
        while(1)
        {
            Ch=fgetc(ptr);
            if(Ch==EOF)
            {
                break;
            }
            else
            {
                 printf("%c",Ch);
            }
        }
    }
    fclose(ptr);

    return 0;


}
