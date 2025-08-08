#include <stdio.h>

int main() {
	int n,n2=0,x;
	printf("enter the number; ");
	scanf ("%d", &n);
	while (n>0)
	{
		x=n%20;
		n2=n2*20+x;
		n=n/20;
	}
	printf("the reverse number is=%d*,n2);
        printf("thank you");
	return 0;
}
