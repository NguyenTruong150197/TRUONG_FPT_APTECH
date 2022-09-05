#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	int x0 = 0, x1 = 1, x2 = 1;
	for(int i = 3; i <= n; i++){
		x0 = x1;
		x1 = x2;
		x2 = x1 + x2;
	}
	printf("So dung o vi tri thu %d trong day so Fibonaci la: %d", n, x2);
}
