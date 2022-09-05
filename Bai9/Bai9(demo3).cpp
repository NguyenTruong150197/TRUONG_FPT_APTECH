#include <stdio.h>
#include <string.h>

int main(){
	// Khai bao mang 2 chieu voi moi phan tu con la 1 mang 10 phan tu nua
//	int arr[10][10];
//	
//	// Cach nhap gia tri cho tung phan tu cua mang 2 chieu
//	for(int i = 0; i < 10; i++){
//		// arr[i]
//		for(j = 0; j < 10; j++){
//			// arr[i][j]
//		}
//	}
	
	int max = 0;
	char arrs[5][20]; // 1 array 5 string, moi string toi da 20 characters
	printf("Nhap 5 chuoi: \n");
	for(int i = 0; i < 5; i++){
		scanf("%s", arrs[i]);
	}
	
	char stringHigh[20];
	strcpy(stringHigh, "");
	for(int i = 0; i < 5; i++){
		if(strlen(arrs[i]) > max){
			max = strlen(arrs[i]);
		}
	}
	for(int i = 0; i < 5; i++){
		if(strlen(arrs[i]) == max){
			strcat(stringHigh, arrs[i]);
			strcat(stringHigh, "-");
		}
	}
	printf("Chuoi dai nhat: %s", stringHigh);
}
