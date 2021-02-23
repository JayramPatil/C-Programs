#include <stdio.h>
#include <conio.h>
#include <time.h>

void delay();

int main()
{
    char Password[17]={'\0'};
    char *cCheck = Password;
    int capital_Check = 0 , Lower_check = 0 , Symbol_check = 0 , Digit_check = 0 , Max_check = 0 , Err = 0 ,Speed = 0;

    up:
    system("color 04");

    printf("Enter speed of program minimum 0 maximum 10\n");
    Speed = (getch() - 48);
    system("cls");
    if(Speed > 10 || Speed < 0)
    {
        Speed = 0;
        printf("Please less then 10\n");
        goto up;
    }
    system("color 06");
    printf("Read rules carefully\n");
    delay(Speed);
    system("color 07");
    printf("Rule No. 1 ) Use  at least a capital letter\n");
    delay(Speed);
    system("color 05");
    printf("Rule No. 2 ) Also a small letter\n");
    delay(Speed);
    system("color 03");
    printf("Rule No. 3 ) Must include digit\n");
    delay(Speed);
    system("color 02");
    printf("Rule No. 4 ) With length limit 8 to 16\n");
    delay(Speed);
    system("color 07");

    puts("\nEnter password ");
    gets(Password);

    while(*cCheck != '\0')
    {
        if(*cCheck >='A' && *cCheck <= 'Z')
        {
            capital_Check++;
            *cCheck = '_';
        }
        else if(*cCheck >='a' && *cCheck <= 'z')
        {
            Lower_check++;
            *cCheck = '_';
        }
        else if(*cCheck >= '0' && *cCheck <= '9')
        {
            Digit_check++;
            *cCheck = '_';
        }
        else if(!((*cCheck >='A' && *cCheck <= 'Z') && (*cCheck >='a' && *cCheck <= 'z') && (*cCheck >= '0' && *cCheck <= '9')))
        {
            Symbol_check++;
            *cCheck = '_';
        }

        cCheck++;
        Max_check++;
    }

    if(Max_check < 8 || Max_check > 16 || capital_Check == 0 || Lower_check == 0 || Digit_check == 0 || Symbol_check == 0 )
    {
        Err++;
    }

    printf("%s\n",Password);

    if(!(Err > 0))
    {
        system("color 02");
        puts("Password is valid");
    }
    else
    {
        system("color 04");
        puts("Rules is broken = Password invalid ");
    }

    if(capital_Check == 0)
    {
        printf("Rule No. 1 is broken\n");
    }

    if(Lower_check == 0)
    {
        printf("Rule No. 2 is broken\n");
    }

    if(Digit_check == 0)
    {
        printf("Rule No. 3 is broken\n");
    }

    if(Symbol_check == 0)
    {
        printf("Rule No. 4 is broken\n");
    }

    if(Max_check < 8)
    {
        printf("Rule No. x is broken = length limit like ent\n");
    }

    if(Max_check > 16)
    {
        printf("Rule No. x is broken = length limit overflow\n");
    }

    if(Err>0)
    {
        printf("Rule No. x is broken = please update your password version\n");
    }

    puts("Press 0 to Debug");
    if(getch() == '0')
    {
        system("color 09");
        printf(" Speed = %d \n capital = %d \n Lower = %d \n Symbol = %d \n Digit = %d \n Max = %d \n Err = %d\n",Speed,capital_Check, Lower_check, Symbol_check , Digit_check , Max_check,Err);
    }

    getch();
    return(0);
}

void delay(int sec)
{
    int milsec = 1000 * sec;

    clock_t startTime = clock();

    while(clock() < (startTime + milsec));
}
