int main(){
	float n1,n2;
	int opcao;
	
	printf("digite um valor");
	scanf("%f",&n1);
	printf("digite um valor");
	scanf("%f",&n2);
	
	printf("digite opcao desejada 1-soma 2-multiplicacao 3-raiz quadrada 4-finalizar");
	scanf("%i",&opcao);
	
	switch (opcao){
		
		case 1:
			printf("%f + %f = %f",n1,n2,(n1+n2));
			break;
		case 2:
			printf("%f X %f = %f",n1,n2,(n1*n2));
			break;
		case 3:
			printf("raiz %f e raiz %f", sqrt(n1),sqrt(n2));
			break;
		case 4:
			printf("nada");
			break;
		default:
			printf("opcao invalida");
			break;
			

		
		
	}
	return 0;
}
