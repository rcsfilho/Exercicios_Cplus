int main(){
	
	float Peso, Altura, imc, abaixo, normal, acima, exc;
	
	printf("Insira seu peso:\n");
	scanf("%f", &Peso);
	printf("Insira sua altura: \n");
	scanf("%f", &Altura);

	imc=Peso/pow(Altura,2);
	
	printf("Seu imc e: \n");
	printf("%f \n", imc);
	
	if(imc<18.5){
		printf("Abaixo do peso normal");
	}else{
		if(imc>18.5 && imc<=25){
			printf("Peso normal");
		}else{
			if(imc>25 && imc<=30){
				printf("Peso acima do normal");
			}else{
				if(imc>30){
					printf("Peso Excessivo");
				}
			}
		}
	}
	
return 0;
}
