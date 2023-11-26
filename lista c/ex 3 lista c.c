int main(){
	
	int contador=0,num,produto;
	
	printf("digite um valor qualquer:");
	scanf("%i",&num);
	if(num<0){
		printf("numero invalido");
	}else{
	
		while(contador<=9){
		contador=contador+1;
		produto=num*contador;
		printf("%i x %i = %i\n",contador,num,produto);
	}	
	}
	
		return 0;
	}
	
	
	
	
	
	
	
	
	

