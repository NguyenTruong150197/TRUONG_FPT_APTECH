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
	
	int x;
	printf("Nhap so nguyen x = ");
	scanf("%d", &x);
	
	int Min = arr[0];
	int Max = arr[0];
	// Tim gia tri be nhat cua mang
	for(i = 0; i < n; i++){
		if(arr[i] < Min){
			Min = arr[i];
		}
	}
	// Tim gia tri lon nhat cua mang
	for(i = 0; i < n; i++){
		if(arr[i] > Max){
			Max = arr[i];
		}
	}
	//Dieu kien tim gia tri xa x nhat cua mang
	if(x >= Max){
		printf("Gia tri trong mang xa gia tri %d nhat la: %d", x, Min);
	}
	else if(x <= Min){
		printf("Gia tri trong mang xa gia tri %d nhat la: %d", x, Max);
	}
	else{
		if((Max - x) > (x - Min)){
			printf("Gia tri trong mang xa gia tri %d nhat la: %d", x, Max);
		}
		else if((Max - x) == (x - Min)){
			printf("Gia tri trong mang xa gia tri %d nhat la: %d, %d", x, Max, Min);
		}
		else{
			printf("Gia tri trong mang xa gia tri %d nhat la: %d", x, Min);
		}
	}
}
