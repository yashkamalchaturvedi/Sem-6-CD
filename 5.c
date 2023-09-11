#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, flag = 0, m;
    char s[32][10] = {"auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"}, st[10];
    printf("Enter the string :");
    gets(st);
    for (i = 0; i < 32; i++)
    {
        m = strcmp(st, s[i]);
        if (m == 0)
            flag = 1;
    }
    if (flag == 0)
        printf("It is not a keyword");
    else

        printf("It is a keyword");

    getch();
}
