#include <stdio.h>
#include <math.h>
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
	
	int Min = 0;
	int Max = 0;
	for(i = 0; i < n; i++){
		if(arr[i] < Min){
			Min = arr[i];
		}
	}
	
	for(i = 0; i < n; i++){
		if(arr[i] > Max){
			Max = arr[i];
		}
	}
	
	int A;
	if(x >= Max){
		printf("Gia tri trong mang gan %d nhat la: %d", x, Max);
	}
	else if(x <= Min){
		printf("Gia tri trong mang gan %d nhat la: %d", x, Min);
	}
	else{
		for(i = 0; i < n; i++){
			A = abs(arr[i] - x);
		}
	}
}
