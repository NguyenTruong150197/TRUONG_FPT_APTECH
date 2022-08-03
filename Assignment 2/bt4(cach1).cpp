#include <stdio.h>
int main(){
	float a, b, c;
	
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	
	if(a >= b){
		if(a >= c){
			printf("So lon nhat trong 3 so la: %f", a);
		}
		else{
			printf("So lon nhat la: %f", c);
		}
	}
	else{
		if(b >= c){
			printf("So lon nhat la: %f", b);
		}
		else{
			printf("So lon nhat la: %f", c);
		}
	}
}
