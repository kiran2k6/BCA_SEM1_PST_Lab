#include <stdio.h>
#include <conio.h>

#define MAX(a,b)(a > b ? a : b)

void main() {
    int a, b, c, l1, l2;
    clrscr();
    printf("Enter 3 numbers a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    l1 = MAX(a, b);
    l2 = MAX(c, l1);
    printf("Biggest number is %d", l2);
    getch();
}
