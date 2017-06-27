#include "diskr.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a,b,c,D,x;
	printf("Please, enter a b c \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if (a == 0) && (b == 0) {
		printf("Net kornei");
		return 0;
	}
	if (a == 0) {
		x = c * -1 / b;
		printf("%7.2f",x);
		return 0;
	D=b*b-4*a*c;
	function(a,b,c,D);
}
