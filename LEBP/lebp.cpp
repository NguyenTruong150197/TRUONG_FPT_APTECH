#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
	return a + b;
}

int substraction(int a, int b){
	return a - b;
}

int multiplication(int a, int b){
	return a * b;
}

float division(int a, int b){
	return a / b;
}

int menu(){
	printf("Calcultion:\n");
	printf("==============\n");
	printf("1. Calculate Sum\n");
	printf("2. Calculate Substraction\n");
	printf("3. Calculate Multiplication\n");
	printf("4. Calculate Division\n");
	printf("5. Exit\n");
	
	int n;
	printf("Nhap chuc nang [1-5]: ");
	scanf("%d", &n);
	
	return n;
}


int main(){
	printf("Input Number\n");
	int a, b;
	int tong, hieu, tich, thuong;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	while(true){
		int n = menu();
		if(n > 5 || n < 1){
			continue;
		}
		switch(n){
			case 1:
				tong = sum(a, b);
				printf("Sum: %d\n", tong);
				break;
			case 2:
				hieu = substraction(a, b);
				printf("Subs: %d\n", hieu);
				break;
			case 3:
				tich = multiplication(a, b);
				printf("Subs: %d\n", tich);
				break;
			case 4:
				thuong = division(a, b);
				printf("Subs: %d\n", thuong);
				break;	
			case 5:
				_Exit(0);	
		}
	}
}
