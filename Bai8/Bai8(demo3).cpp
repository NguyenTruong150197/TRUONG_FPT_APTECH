#include <stdio.h>
#include "Bai8(thu_vien).h"

int main(){
	int x = 3, y = 4, z = 5;
	if(Kt3Canh(x, y, z) == false){
		printf("Day la 3 canh tam giac\n");
	}
	else{
		printf("Khong phai 3 canh cua tam giac");
	}
}
