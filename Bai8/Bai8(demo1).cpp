#include <stdio.h>
#include "Bai8(thu_vien).h"
#include "Bai8(thu_vien2).h"

int tinhTong(int a, int b){
	int c = a + b;
	return c;
}

int main(){
	int x = 10, y = 20;
	int z;
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	z = tinhTong(x, y);
	printf("Ket qua: %d\n", z);
	if(KtSoNguyenTo(n) == true){
		printf("Day la so nguyen to");
	}
	else{
		printf("Day khong phai la so nguyen to");
	}
}
