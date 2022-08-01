#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	do{
		float p, s;
		printf("Nhap do dai 3 canh cua tam giac: \n");
		printf("a = ");
		scanf("%f", &a);
		printf("b = ");
		scanf("%f", &b);
		printf("c = ");
		scanf("%f", &c);
		
		p = a + b + c;
		printf("Chu vi tam giac la: %f \n", p);
		s = sqrt(p*(p - a)*(p - b)*(p - c));
		printf("Dien tich tam giac la: %f", s);
	}while(a + b <= c || a + c <= b || b + c <= a);
}
