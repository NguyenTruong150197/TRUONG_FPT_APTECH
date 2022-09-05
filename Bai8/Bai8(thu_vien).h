#include <math.h>

int soSanh(int a, int b){
	if(a > b){
		return a;
	}
	return b;
}

double tinhDienTich(double a, double b, double c){
	double p2 = (a + b + c)/2;
	double s = sqrt(p2*(p2 - a)*(p2 - b)*(p2 - c));
	return s;
}

void MenuNhaHang(){
	printf("1. Pho ga\n");
	printf("2. Pho bo\n");
	printf("3. Rau muong xao\n");
}

bool KtSoDuong(int n){
	if(n > 0){
		return true;
	}
	return false;
}

bool Kt3Canh(int a, int b, int c){
	return (a + b <= c || a + c <= b || b + c <= a);
}
