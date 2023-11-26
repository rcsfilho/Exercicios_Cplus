int main(){
	int idade;
	
	printf("digite sua idade\n");
	scanf("%i",&idade);
	if(idade<16){
		printf("não eleitor");
	}else if(idade>18 && idade<=65){
		printf("eleitor obrigatorio");
	}else{
		printf("eleitor facultativo");
	}
	
	return 0;
	
	
	
	
	
	
	
}
