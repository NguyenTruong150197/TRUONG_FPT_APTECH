#include <stdio.h>
#include <string.h>

// Ham chuyen doi mang chu thuong thanh mang chu hoa
void uppercase(char str[]){
	for(int i = 0; i < strlen(str); i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}
}

// Ham timm so lon nhat trong 1 mang voi n so nguyen
int max0fArray(int arr[], int n){
	int high = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > high){
			high = arr[i];
		}
	}
	return high;
}

int main(){
	char s[20];
	
	printf("Nhap chuoi: ");
	scanf("%s", s);
	
	uppercase(s);
	
	printf("%s", s);
}
