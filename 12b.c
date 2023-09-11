#include <stdio.h>
#include <conio.h>
int c = 0;
char p[20];
void s();
void l();
void lprime();
void l()
{
    s();
    lprime();
}
void lprime()
{
    if (p[c] == ',')
    {
        c++;
        s();
        lprime();
    }
}
void s()
{
    if (p[c] == 'a')
        c++;
    else if (p[c] == '(')
    {
        c++;
        l();
        if (p[c] == ')')
            c++;
        else
            c--;
    }
    else
        printf("Invalid Expression");
}
void main()
{
    printf("Implementation of RECURSIVE DESCENT PARSER\n");
    printf("Enter the Expression:\n");
    scanf("%s", p);
    s();
    if (p[c] == '$')
        printf("The String is accepted");
    else
        printf("The string is rejected");
    getch();
}