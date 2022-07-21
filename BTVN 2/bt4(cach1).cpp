#include <stdio.h>
int main(){
	float a, b, c;
	
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	
	if(a >= b){
		if(a >= c){
			printf("So lon nhat trong 3 so la: %d", a);
		}
		else{
			printf("So lon nhat la: %d", c);
		}
	}
	else{
		if(b >= c){
			printf("So lon nhat la: %d", b);
		}
		else{
			printf("So lon nhat la: %d", c);
		}
	}
}
