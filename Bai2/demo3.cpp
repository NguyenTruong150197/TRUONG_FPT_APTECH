#include <stdio.h>
int main(){
	int a;
	printf("Nhap a = ");
	scanf("%d", &a);
	
	int b;
	printf("Nhap b = ");
	scanf("%d", &b);
	
	if(a > b){
		// Yes
		printf("Max la: %d", a);
	}
	else{
		// No
		if(a < b){
			printf("Max la: %d", b);
		}
		else{
			printf("Hai so bang nhau");
		}
	}
}
