#include <stdio.h>
#include <math.h>

int main(){
	float a;
	float b;
	float c;
	
	printf("Moi nhap 3 so de kiem tra: \n");
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	
	if(a + b <= c || a + c <= b || b + c <= a){
		printf("Day khong phai 3 canh cua tam giac");
	}
	else{
		float p;
		float S;
		p = (a + b + c)/2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		
		printf("Day la 3 canh cua 1 tam giac \n");
		printf("Chu vi cua tam giac la: %f \n", 2*p);
		printf("Dien tich cua tam giac la: %f", S);
	}
}
