int main(){
	int ano,mes,dia,total;
	printf("qual sua idade em anos?");
	printf("\n");
	scanf("%i",&ano);
	printf("meses apos ano inteiro");
	printf("\n");
	scanf("%i",&mes);
	printf("digite dia");
	printf("\n");
	scanf("%i",&dia);
	total=ano*365+mes*30+dia;
	printf("sua idade em dias:");
	printf("\n");
	printf("%i",total);
	
	
	
	
		
	return 0;
}
