#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	int ucln = 1;
	for(int i = 1; i <= a; i++){
		if(a % i == 0 && b % i == 0){
			if(i > ucln){
				ucln = i;
			}
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
	
	for(int i = 0; ; i++){
		if(i % a == 0 && i % b == 0){
			printf("Boi so chung be nhat cua 2 so %d va %d la: %d", a, b, i);
			break;
		}
	}
}
