#include <stdio.h>
int main(){
	float a, b, c, Max;
	Max = a;
	
	printf("Nhap 3 so vao: \n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	
	if(b > Max){
		Max = b;
	}
	if(c > Max){
		Max = c;
	}
	printf("So lon nhat trong 3 so vua nhap la: %d", Max);
}
