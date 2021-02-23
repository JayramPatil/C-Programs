#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20]="";

    printf("Enter The String To Toggle : ");
    scanf("%[^\n]",&str);

    Togglestr(str);

    printf("String After Toggle : %s",str);

    getch();
    return 0;
}
void Togglestr(char *str)
{
    int Cnt=0;
    while(*str!='\0')
    {
        if(Cnt%2==0)
        {
            if(*str>='a'&&*str<='z')
            {
                *str-=32;
            }
        }
        else
        {
            if(*str>='A'&&*str<='Z')
            {
                *str+=32;
            }
        }
        Cnt++;
        str++;
    }
    *str='\0';
}
