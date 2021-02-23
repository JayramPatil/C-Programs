#include<stdio.h>

int main()
{
    char *ptr = NULL;
    char *ptr2 = NULL;
    char str[50]="";
    char dst[50]="";
    char ch='\0';

    printf("Enter The String => ");
    scanf("%[^\n]",&str);

    ptr=str;
    ptr2=dst;

    while(*ptr != '\0')
    {
        if(*ptr==' ')
        {
            ptr++;
            ptr2++;
            continue;
        }
        ch=*ptr;
        ptr++;
        while(*ptr != ' ' && *ptr != '\0')
        {
            *ptr2=*ptr;
            ptr++;
            ptr2++;
        }
        *ptr2=ch;
        ptr2++;
        *ptr2='a';
        ptr2++;
        *ptr2='y';
        ptr2++;
        *ptr2=*ptr;
        ptr2++;
        ptr++;
    }
    printf("%s",dst);

    return 0;
}
