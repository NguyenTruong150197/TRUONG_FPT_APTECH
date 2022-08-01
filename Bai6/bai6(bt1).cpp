#include <stdio.h>
int main(){
	int n;
	printf("Nha so nguyen n = ");
	scanf("%d", &n);

	int ary[n];
	int i;
	printf("Nhap %d so nguyen:\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &ary[i]);
	} 
	int high1 = ary[0];
	for(i = 0; i < n; i++){
		if(ary[i] > high1){
			high1 = ary[i];
		}
	}
	int high2 = high1;
	for(i = 0; i < n; i++){
		if(ary[i] < high1){
			high2 = ary[i];
			break;
		}
	}
	if(high2 == high1){
		printf("Mang khong co gia tri gan lon nhat\n");
	}
	else{
		for(i = 0; i < n; i++){
			if(ary[i] > high2 && ary[i] < high1){
				high2 = ary[i];
			}
		}
	}
	printf("So lon nhat trong mang la: %d\n", high1);
	printf("So gan lon nhat la: %d", high2);
}
