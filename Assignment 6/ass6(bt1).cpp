#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	int arr[n];
	int total;
	int c = 0, sum = 0;
	printf("Nhap cac gia tri cua mang: \n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 != 0){
			c++;
		}
	}
	if(c == 0){
		printf("Khong co so le trong mang");
	}
	else{
		for(int i = 0; i < n; i++){
			if(arr[i] % 2 != 0){
				sum += arr[i];
			}
		}
		total = float(sum)/c;
		printf("Trung binh cong cac so le trong mang la: %d", total);
	}
}
