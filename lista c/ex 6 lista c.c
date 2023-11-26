int main(){
	
	int c=0;
	float valor,media,total;
	total=0;
	
	while(valor>=0)
	{
		
		printf("digite um valor (negativo para retornar):");
		scanf("%f",&valor);	
		
		if(valor>0){
			total=total+valor;
			c=c+1;
		}
	}
	media=total/c;
	printf("valor media: %.2f\n",media);
	
	return 0;
	
	
	
	
	
	
	
	
}
