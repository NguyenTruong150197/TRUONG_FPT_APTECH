#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int Min;
	Min = a;
	
	printf("Nhap a = ");
	scanf("%d", &a);
	
	printf("Nhap b = ");
	scanf("%d", &b);
	
	printf("Nhap c = ");
	scanf("%d", &c);
	
	if(b < Min){
		Min = b;
	}
	
	if(c < Min){
		Min = c;
	}
	
	printf("So be nhat la %d", Min);
}
