int TongChuSo(int a){
	int sum = 0;
	int soTemp = a;
	
	while(soTemp != 0){
		sum += soTemp % 10
		soTemp /= 10
	}
	return sum;
}
