int main(){
	
	float tipo, pcusto, pvenda, total;
	
	printf("Insira 1 para perecivel ou 2 para nao-perecivel: \n");
	scanf("%f", &tipo);
	printf("Insira o valor do produto: \n");
	scanf("%f", &pcusto);
	
	pvenda=pcusto*1.4;
	
	if(tipo==1 && pvenda>20.0){
		total=pvenda*0.8;
		printf("%f foi o total com desconto de 20 por cento (promocao 1)", total);
	}else{
		if(tipo==1 && pvenda>10.0 && pvenda<=20.0){
			total=pvenda*0.9;
			printf("%f foi o total com desconto de 10 por cento (promocao 2)", total);
		}else{
			if(tipo==1 && pvenda<10.0){
			total=pvenda*0.85;
			printf("%f foi o total com desconto de 15 por cento (promocao 3)", total);
		}else{
			if(tipo==2 && pvenda>50.0){
				total=pvenda*0.95;
				printf("%f foi o total com desconto de 5 por cento (promocao 4)", total);
			}else{
				if(tipo==2 && pvenda<=50.0){
					total=pvenda;
					printf("%f foi o total e nao se enquadra em nenhuma promocao(promocao 0)", total);
				}
			}
		}
	}
}
	
	return 0;
}

