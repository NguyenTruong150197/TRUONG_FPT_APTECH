#include <stdio.h>
int main(){
	int n;
	printf("Nha so nguyen n = ");
	scanf("%d", &n);
	if(n <= 0){
		printf("Nhap sai, moi chay lai chuong trinh!");
	}
	else{
		int ary[n];
		int i, high1, high2;
		printf("Nhap %d so nguyen:\n", n);
		for(i = 0; i < n; i++){
			scanf("%d", &ary[i]);
		} 
		high1 = high2 = ary[0];
		for(i = 1; i < n; i++){
			if(ary[i] > high1){
				high1 = ary[i];
			}
		}
		for(i = 1; i < n; i++){
			if(ary[i] > high2 && ary[i] != high1){
				high2 = ary[i];
			}
		}
		printf("So lon nhat trong mang la: %d\n", high1);
		printf("So gan lon nhat la: %d", high2);
	}
}
