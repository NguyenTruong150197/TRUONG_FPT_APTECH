#include <stdio.h>
int main(){
	// l� ghi ch�
	// int num
	int num;
	printf("Nhap so can kiem tra num = ");
	scanf("%d",&num);
	// r = num mod 2
	int r;
	r = num % 2;
	// h�nh thoi r = 0
	if(r == 0){
		// chay vao day neu Yes
		printf("Number is Even");
	}
	else{
		// chay vao day neu No
		printf("Number is Odd");
	}
}
