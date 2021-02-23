#include<stdio.h>
void SearchWord(char*str,char * str2)
{
    int i=0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            str++;
            continue;
        }
        i++;
        while(*str != '\0' && *str != ' ')
        {
            if(*str == *str2)
            {
                while(*str == *str2)
                {
                    str++;
                    str2++;
                    break;
                }
                if(*str2 == '\0')
                {
                    printf("%d",i);
                }
            }
            else
            {
                str++;
            }
        }
    }
}
int main()
{
    char str[]="jayram sadashiv patil",str2[]="patil";

    SearchWord(str,str2);

    return 0;
}
