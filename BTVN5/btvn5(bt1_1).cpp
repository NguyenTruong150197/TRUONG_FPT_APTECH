#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1;i <= n;i++){
		if(n % i == 0){
			printf("Cac uoc cua n la: %d\n", i);
			sum += i;
		}
	}
			printf("Tong cac uoc cua n la: %d", sum);
}
