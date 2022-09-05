#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	
	int arr[n];
	int i;
	printf("Nhap %d so nguyen:\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int tm = 0;
	int kl = 0;
	for(i = 0; i < n; i++){
		if(arr[i] > 0){
			tm += arr[i];
			if(tm > kl){
				kl = tm;
			}
		}
		else{
			tm = 0;
		}
	}
}
