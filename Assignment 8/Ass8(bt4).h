int BoiChungNhoNhat(int a, int b){
	for(int i = 1; ; i++){
		if(i % a == 0 && i % b == 0){
			return i;
		}
	}
}
