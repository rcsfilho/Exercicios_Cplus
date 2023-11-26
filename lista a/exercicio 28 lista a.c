int main(){ 
	int chule,cheiroso;
	float pirriu,total;
	printf("digite o valor total da conta:");
	scanf("%f",&total);
	chule=total/3;
	cheiroso=total/3;
	pirriu=total-(chule+cheiroso);
	printf("chule vai pagar o valor de:");
	printf("%i",chule);
	printf("\n");
	printf("cheiroso vai pagar o valor de:");
	printf("%i",cheiroso);
	printf("\n");
	printf("pirriu vai pagar o valor de:");
	printf("%f",pirriu);
	
	return 0;

	
	
}
