#include <stdio.h>
int main(){
	int y;
	printf("Nhap so nam muon gui: ");
	scanf("%d", &y);
	
	int tk = 4000; // so tien trong tai khoan goc
	int n = 0; // n la so nam tra lai
	while(n < y){
		int ls = tk*8/100;
		tk += ls;
		n++;
	}
	printf("So tien co sau %d nam gui ngan hang la: %d", y, tk);
}
