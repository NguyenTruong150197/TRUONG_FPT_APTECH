#include <stdio.h>
int main(){
	int tk = 4000; // so tien trong tai khoan goc
	int n = 0; // n la so nam tra lai
	while(n < 4){
		int ls = tk*8/100;
		tk += ls;
		n++;
	}
	printf("So tien co sau 4 nam gui ngan hang la: %d", tk);
}
