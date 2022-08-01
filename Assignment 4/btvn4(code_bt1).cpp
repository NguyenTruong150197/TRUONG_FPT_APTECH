#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int i = 0;
	while(i < n){
		int r = i % 2;
		if(r != 0){
			printf("Cac so le be hon %d la %d \n", n, i);
		}
		i++;
	}
}
