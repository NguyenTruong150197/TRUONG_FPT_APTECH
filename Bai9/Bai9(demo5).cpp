#include <stdio.h>

typedef struct SV{
	char TenSV[50];
	char MaSV[20];
	int DiemThi;
}SINHVIEN; // typedef dung de dat lai ten cho struct

int main(){
	SINHVIEN nam;
	nam.DiemThi = 10;
	printf("Nhap ten sinh vien: ");
	scanf("%s", nam.TenSV);
	
	SINHVIEN t2207e[27];
	for(int i = 0; i < 27; i++){
		scanf("%s", t2207e[i].TenSV);
	}
}
