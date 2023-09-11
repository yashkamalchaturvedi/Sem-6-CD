#include <stdio.h>
#include <conio.h>
void main()
{
    char a[30];
    int i = 2, a1 = 0;
    printf("Enter comment:");
    gets(a);
    if (a[0] == '/')
    {
        if (a[1] == '/')
            printf("It is a comment");
        else if (a[1] == '*')
        {
            for (i = 2; i <= 30; i++)
            {
                if (a[i] == '*' && a[i + 1] == '/')
                {
                    printf("It is a comment");
                    a1 = 1;
                    break;
                }
                else
                    continue;
            }
            if (a1 == 0)
                printf("It is not a comment");
        }
        else
            printf("It is not a comment");
    }
    else
        printf("It is not a comment");

    getch();
}