#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	int arr[n];
	int i;
		printf("Nhap %d so nguyen:\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &ary[i]);
	} 
	
	int t = 0;
	// tim duoc 1 so duong
	for(i = 0; i < n; i++){
		if(arr[i] > 0){
			t = arr[i];
			break;
		}
	}
	
}
