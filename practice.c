#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int i = 0;
	int j = 0;

	for (i=0; i<100; i++) {
		j=j+i;
	}

	printf("the total is %d\n",j);
}