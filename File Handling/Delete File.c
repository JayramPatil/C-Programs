#include<stdio.h>

int main()
{
    int output=0;

    output=remove("Text.txt");

    if(output==0)
    {
        printf("File Deleted Succesfully");
    }
    else
    {
        printf("Not Able To Delete The File");
    }
    return 0;
}
