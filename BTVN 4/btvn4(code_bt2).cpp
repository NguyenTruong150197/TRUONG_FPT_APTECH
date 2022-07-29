#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int i = 0;
	while(n > i){
		int r = i % 2;
		int k = i % 3;
		int Max = 0;
		if(r == 0 && k == 0){
			if(i > Max){
				Max = i;
				printf("So lon nhat tiem can %d ma chia het cho ca 2 va 3 la: %d \n", n, Max);
			}
		}
		i++;
	}
}

