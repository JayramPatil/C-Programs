// Password Validator

#include<stdio.h>


void AcceptPassword()
{
    char Password[12] = "";

    printf("\n*********************************************************************************\n");
    printf("\nFollow these guidelines when creating a password:-\n\nThe password must be 8 to 10 characters long.\nThe password must contain a mix of letters, numbers, and/or special characters.\nThe password is case-sensitive.\nThe password must contain a mix of letters, numbers, and/or special characters.");
    printf("\n\n*********************************************************************************\n");

    printf("\n\n\t Please Enter The Password => ");
    gets(Password);

    CheckPassword(&Password);

    return;
}
void CheckPassword(char *psw)
{
    int Capital = 0, Small = 0, Number = 0, SpecialChar = 0, Length = 0;
    while(*psw != '\0')
    {
        Length += (((*psw >= 48 && *psw <= 57)? ++Number : (*psw >= 65 && *psw <= 90)? ++Capital : (*psw >= 97 && *psw <= 122)? ++Small : (*psw >= 33 && *psw <= 126)? ++SpecialChar : Length)*0)+1;
        psw++;
    }

    if(Length >= 8 && Length <=10 && Capital != 0 && Small != 0 && Number != 0 && SpecialChar != 0)
    {
        printf("\n\n***********************************************************************************\n");
        printf("\n\n\t ***=*** VALID PASSWORD ***=*** \n\n\n Capital Letters => %d\n Small Letters => %d\n Digits => %d\n Special Characters => %d\n Length => %d\n",Capital,Small,Number,SpecialChar,Length);
        printf("\n\n***********************************************************************************\n");
    }
    else
    {
        printf("\n\n\t ***=*** INVALID PASSWORD ***=*** \n\n\n");
    }
    return;
}
int main()
{
    AcceptPassword();

    return 0;
}
