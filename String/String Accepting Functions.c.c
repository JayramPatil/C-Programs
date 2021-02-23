#include<stdio.h>
#include<conio.h>

main()
{
    char ch,str[50]="";
    int loc=0;

    puts("Enter String =>");
    gets(str);

    /*
    printf("\n Enter String =>");
    gets(str);

    while((ch=getchar())!='\n')
    {
        str[loc++]=ch;
        str[loc]='\0';
    }
    */

    puts(str);
}
