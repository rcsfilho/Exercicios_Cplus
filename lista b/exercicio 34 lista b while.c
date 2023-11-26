int main(){
	
	int contador=1;
	float maior,menor,valor;
	
	while(contador <=4){
		
		
		printf("digite um valor\n");
		scanf("%f",&valor);
		
		if(contador==1){
			maior=valor;
			menor=valor;
		}
		
		if(valor>maior){
			maior=valor;
		}else if(valor<menor){
			menor=valor;
			
			
		}
		contador=contador+1;
	}
	
	printf("o maior valor foi: %f\n",maior);
	printf("o menor valor foi: %f\n",menor);
	
	return 0;
	
	
}
