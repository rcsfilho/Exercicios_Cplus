int main(){
	
	int contador=0;
	float n,maior;
	
	while(contador<10){
		
	printf("digite um valor\n");
	scanf("%f",&n);
	contador=contador+1;
	
	if(contador==1){
		maior=n;
	}if(n>maior){
		maior=n;
	}	
		
 	
	}
	
	printf("o maior valor e: %f",maior);
	return 0;
}
