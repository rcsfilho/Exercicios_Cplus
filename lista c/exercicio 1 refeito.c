int main(){
	int contador=1,soma=0,p;
	
	while(contador<=10){
		printf("digite o valor do produto");
		scanf("%i",&p);
		soma=soma+p;
		contador=contador+1;
	}
	printf("a soma dos valores foi: %i\n",soma);
	return 0;
	
	
	
}
