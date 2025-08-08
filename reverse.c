#include <stdio.h>

int main() {
	int n,n2=0,x;
	printf("enter the number; ");
	scanf ("%d", &n);
	while (n>0)
	{
		x=n%10;
		n2=n2*10+x;
		n=n/10;
	}
	printf("the reverse number is=%d*,n2);

	return 0;
}
