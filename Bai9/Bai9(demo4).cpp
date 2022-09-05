#include <stdio.h>
#include <iostream>

int main(){
	int x = 10;
	int *p;
	p = &x;
	
	printf("x = %d\n", x);
	printf("Dia chi cua x: ");
	std::cout<< &x;
	printf("\nGia tri cua p = ");
	std::cout<< p;
	x++;
	printf("\nx = %d", x);
	(*p)++;
	printf("\nx = %d", x);
}
