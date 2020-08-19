#include<stdio.h>
int main() 
{
	int x, y, z;
	printf("Enter integer : ");
	scanf_s("%d", &x);
	z = x * x;
	if (x <= 0) {
		printf("Error please try again");
	}
	else if (x > 0) {
		printf("Side = %d\n", x);
		printf("Area = (Side*Side) =  %d\n", z);
		for (y = 1; y <= x; y++) {
			for (int i = 1; i <= x; i++) {
				printf(" * ");
			}
			printf("\n");
		}
	}
	return 0;
}