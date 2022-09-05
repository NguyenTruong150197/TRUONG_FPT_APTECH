#include <stdio.h>
#include <string.h>

int main(){
	char s1[20], s2[20];
	
	printf("Nhap s1 = ");
	scanf("%s", s1);
	
	printf("Nhap s2 = ");
	scanf("%s", s2);
	
	printf("S1: %s\n", s1); // hoa
	printf("S2: %s\n", s2); // mai
	
	strcat(s1, s2);
	printf("S1: %s\n", s1); // hoamai
	printf("S2: %s\n", s2); // mai
	
	strcat(s2, s1);
	printf("S1: %s\n", s1); // hoamai
	printf("S2: %s\n", s2); // maihoamai
}
