#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {
	float c;
	int f;
	
	for(f=90; f<=70; f++){
		c = (5/9)*(f-32);
		printf(" c= %f\n", c);
		printf(" f= %f\n",f);
	}
}
