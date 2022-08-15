#include <stdio.h>

bool KtSoNguyenTo(int a){
	if(a < 2){
		return false;
	}
	for(int i = 2; i <= a/2; i++){
		if(a % i != 0){
			return true;
		}
		return false;
	}
}

int main(){
	int n;
	printf("Input interger n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Input member of array:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Prime number: \n");
	for(int i = 0; i < n; i++){
		if(KtSoNguyenTo(arr[i]) == true){
			printf("%d ", arr[i]);
		}
	}
	printf("\nNo prime number");
}
