#include <stdio.h>
#include <math.h>

int main(){
	float a;
	float b;
	float c;
	float d;
	float x;
	float x1;
	float x2;
	
	printf("Giai phuon trinh: ax^2 + bx + c = 0 \n");
	printf("Moi nhap a, b, c de hinh thanh phuong trinh. \n");
	
	printf("Nhap a = ");
	scanf("%f", &a);
	
	printf("Nhap b = ");
	scanf("%f", &b);
	
	printf("Nhap c = ");
	scanf("%f", &c);
	
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh co vo so nghiem");
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
		else{
			x = (-c)/b;
			printf("Phuong trinh có nghiem x = %f", x);
		}
	}
	else{
		d = b*b - 4*a*c;
		if(d < 0){
			printf("Phuong trinh vo nghiem");
		}
		else{
			if(d == 0){
				x1 = x2 = -b/(2*a);
				printf("Phuong trinh co nghiem kep x1 = x2 = %f", x1);
			}
			else{
				x1 = (-b + sqrt(d))/(2*a);
				x2 = (-b - sqrt(d))/(2*a);
				printf("Phuong trinh co 2 nghiem: \n");
				printf("x1 = %f \n", x1);
				printf("x2 = %f", x2);
			}
		}
	}
}
