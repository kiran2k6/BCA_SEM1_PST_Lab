#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum = 0;
    clrscr();
    do {
	printf("\nEnter a number: ");
	scanf("%d", &num);
	if(num > 0 && num != 999) {
	    sum += num;
	}
	printf("\nSum = %d", sum);
    } while(num != 999);
    printf("\nYou have entered 999, stopping.");
    getch();
}