#include <stdio.h>
int main(){
	float a, b, c, Max;
	Max = a;
	
	printf("Nhap 3 so vao: \n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	if(b > Max){
		Max = b;
		if(c > Max){
			Max = c;
			printf("So lon nhat trong 3 so vua nhap la: %f", Max);
		}
		else{
			printf("So lon nhat trong 3 so vua nhap la: %f", Max);
		}
	}
	else{
		printf("So lon nhat trong 3 so vua nhap la: %f", Max);
	}
}
