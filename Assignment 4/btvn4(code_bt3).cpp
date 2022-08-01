#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int i = 1;
	while(i < n){
		if(n % i == 0){
			printf("Cac uoc cua so %d la %d \n", n, i);
		}
		i++;
	}
}
