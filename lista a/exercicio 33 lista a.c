int main(){
	float n01,n05,n10,n25,n50,n1,total;
	
	printf("qtd de moedas de 1 centavo\n");
	scanf("%f",&n01);
	printf("qtd de moedas de 5 centavos\n");
	scanf("%f",&n05);
	printf("qtd de moedas de 10 centavos\n");
	scanf("%f",&n10);
	printf("qtd de moedas de 25 centavos\n");
	scanf("%f",&n25);
	printf("qtd de moedas de 50 centavos\n");
	scanf("%f",&n50);
	printf("qtd de moedas de 1 real\n");
	scanf("%f",&n1);
	
	total=n01*0.01+n05*0.05+n10*0.10+n25*0.25+n50*0.50+n1*1;
	printf("o valor total em reais: \n %f",total);
	
	return 0;
	
	
	
	
}
