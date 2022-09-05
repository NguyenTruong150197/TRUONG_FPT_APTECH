#include <stdio.h>
#include <math.h>
#include "Bai8(thu_vien).h"

int main(){
	int x = 10, y = 20;
	int z;
	z = soSanh(x, y);
	printf("So lon hon la: %d\n", z);
	// Cach su dung ham return void
	MenuNhaHang();
	if(KtSoDuong(21)){
		printf("So nay la so duong\n");
	}
	if(KtSoDuong(-3)){
		printf("So nay la so duong\n");
	}
	else{
		printf("So nay la so am\n");
	}
}
