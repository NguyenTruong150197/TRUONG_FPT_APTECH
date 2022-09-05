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
	
	float x;
	printf("Nhap so nguyen x = ");
	scanf("%f", &x);
	
	int Min = 0;
	int Max = 0;
	for(i = 0; i < n; i++){
		if(arr[i] < Min){
			Min = arr[i];
		}
		else{
			Max = arr[i];
		}
	}
	
	if((Max - x) > (x - Min)){
		printf("Gia tri trong mang xa gia tri %f nhat la: %d", x, Max);
	}
	else{
		printf("Gia tri trong mang xa gia tri %f nhat la: %d", x, Min);
	}
}
