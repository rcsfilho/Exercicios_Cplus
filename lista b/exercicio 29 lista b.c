int main(){
	float n;
	
	printf("digite um numero");
	scanf("%f",&n);
	
	if(n>=0){
		printf("raiz do numero: %f\n",sqrt(n));
	}else{
		printf("o quadrado do numero e: %f\n", pow(n,2));
	}
	
	
	return 0;
	
	
	
	
	
	
}
