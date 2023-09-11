#include <stdio.h>
#include <conio.h>
void main()
{
    char s[5];
    printf("Enter any operator:");
    gets(s);
    switch (s[0])
    {
    case '>':
        if (s[1] == '=')
            printf("Greater than or equal");
        else
            printf("Greater than");
        break;
    case '<':
        if (s[1] == '=')
            printf("Less than or equal");
        else
            printf("Less than");
        break;
    case '=':
        if (s[1] == '=')
            printf("Equal to");
        else
            printf("Assignment");
        break;
    case '!':
        if (s[1] == '=')
            printf("Not Equal");
        else
            printf("Bit Not");
        break;
    case '&':
        if (s[1] == '&')
            printf("Logical AND");
        else
            printf("Bitwise AND");
        break;
    case '|':
        if (s[1] == '|')
            printf("Logical OR");
        else
            printf("Bitwise OR");
        break;
    case '+':
        printf("Addition");
        break;
    case '-':
        printf("Subtraction");
        break;
    case '*':
        printf("\nMultiplication");
        break;
    case '/':
        printf("\nDivision");
        break;
    case '%':
        printf("Modulus");
        break;
    default:
        printf("Not a operator");
    }
    getch();
}
