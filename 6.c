#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main()
{
    int i, flag;
    char a[5];

    puts("enter the value:");
    gets(a);

    for (i = 0; i < strlen(a); i++)
    {
        if (isdigit(a[i]))
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        puts("constant");
    else
        puts("not constant");
    getch();
}