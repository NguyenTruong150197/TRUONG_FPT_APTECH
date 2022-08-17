bool KtSoNguyenTo(int a){
	if(a < 2){
		return false;
	}
	for(int i = 2; i <= a/2; i++){
		return true;
	}
}
