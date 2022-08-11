bool KtSoNguyenTo(int a){
	for(int i = 2; i <= a; i++){
		return (a % 1 == 0 && a % a == 0 && a % i != 0);
	}
}
