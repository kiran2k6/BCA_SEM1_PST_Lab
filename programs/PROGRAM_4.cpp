#include <stdio.h>
#include <conio.h>

void main() {
    int num, orgnum;
    clrscr();
    int sum = 0, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    orgnum = num;
    while(num > 0) {
	rem = num % 10;
	sum += rem;
	rev = rev * 10 + rem;
	num = num / 10;
    }
    printf("\n Sum of digits: %d", sum);
    printf("\n Reversed number: %d", rev);
    if(orgnum == rev) {
	printf("\n %d is a palindrome", orgnum);
    } else {
	printf("\n %d is not a palindrome", orgnum);
    }
    getch();
}