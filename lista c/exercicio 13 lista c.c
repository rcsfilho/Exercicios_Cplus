int main(){
	
	int n,soma=0,contador=0,media;
	
	
	while(soma<=100){
		
		printf("digite um valor inteiro:\n");
		scanf("%i",&n);
		soma=soma+n;
		contador=contador+1;
		
	}
	media=soma/contador;
	printf("foram contados %i numeros\n",contador);
	printf("a media dos numeros foi: %i\n",media);
	
	return 0;
	
	
	
	
}
