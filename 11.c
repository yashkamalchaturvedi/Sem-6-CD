#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
    char q[9][9] = {
        {'>', '>', '<', '<', '<', '<', '>', '<', '>'},
        {'>', '>', '<', '<', '<', '<', '>', '<', '>'},
        {'>', '>', '>', '>', '<', '<', '>', '<', '>'},
        {'>', '>', '>', '>', '<', '<', '>', '<', '>'},
        {'>', '>', '<', '<', '<', '<', '>', '<', '>'},
        {'<', '<', '<', '<', '<', '<', '=', '<', 'E'},
        {'>', '>', '>', '>', '>', 'E', '>', 'E', '>'},
        {'>', '>', '>', '>', '>', 'E', '>', 'E', '>'},
        {'<', '<', '<', '<', '<', '<', 'E', '<', 'A'}};
char
    s[30],
    st[30], qs[30];
int
    top = -1,
    r = -1, p = 0;
void push(char a)
{
    top++;
    st[top] = a;
}
char pop()
{
    char a;
    a = st[top];
    top--;
    return a;
}
int find(char a)
{
    switch (a)
    {
    case '+':
        return 0;
    case '-':
        return 1;
    case '*':
        return 2;
    case '/':
        return 3;
    case '^':
        return 4;
    case '(':
        return 5;
    case ')':
        return 6;
    case 'a':
        return 7;
    case '$':
        return 8;
    default:
        return -1;
    }
}
void display(char a)
{
    printf("\n Shift %c", a);
}
void display1(char a)
{
    if (isalpha(a))
        printf("\n Reduce E->%c", a);
    else if ((a == '+') || (a == '-') || (a == '*') || (a == '/') || (a == '^'))
        printf("\n Reduce E->E%cE", a);
    else if (a == ')')
        printf("\n Reduce E->(E)");
}
int rel(char a, char b, char d)
{
    if (isalpha(a) != 0)
        a = 'a';
    if (isalpha(b) != 0)
        b = 'a';
    if (q[find(a)][find(b)] == d)
        return 1;
    else
        return 0;
}
void main()
{
    char s[100];
    int i = -1;
    printf("Operator Preceding Parser \n");
    printf("Enter the Arithmetic Expression End with $.. \n");
    gets(s);
    push('$');
    while (i)
    {
        if ((s[p] == '$') && (st[top] == '$'))
        {
            printf("\n Accepted");
            break;
        }
        else if (rel(st[top], s[p], '<') || rel(st[top], s[p], '='))
        {
            display(s[p]);
            push(s[p]);
            p++;
        }
        else if (rel(st[top], s[p], '>'))
        {
            do
            {
                r++;
                qs[r] = pop();
                display1(qs[r]);
            } while (!rel(st[top], qs[r], '<'));
        }
    }
    getch();
}