int main(){
	float hn,he,br,liq;
	printf("informe o numero de horas normais trabalhadas:");
	scanf("%f",&hn);
	printf("informe o numero de horas extras trabalhadas:");
	scanf("%f",&he);
	br=hn*10+he*15;
	printf("salario br �:");
	printf("%f",br);
	liq=br*0.9;
	printf("\n");
	printf("sal�rio liquido �:");
	printf("%f",liq);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
