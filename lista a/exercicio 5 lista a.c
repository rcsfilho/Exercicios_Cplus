int main(){
	
	float ham,bt,refr,cer,doce,pham,pbt,prefr,pcer,pdoce,total;
	
	printf("numero de hamburgers:");
	scanf("%f",&ham);
	pham=ham*8.0;
	printf("o preço de hamburgers:%f",pham);
	printf("\n");
	printf("quantidade de batata:");
	scanf("%f",&bt);
	pbt=bt*12;
	printf("o preço de batata:%f",pbt);
	printf("\n");
	printf("numero de refrigerantes");
	scanf("%f",&refr);
	prefr=refr*3;
	printf("o preço de refrigerantes:%f",prefr);
	printf("\n");
	printf("quantidade de cerveja:");
	scanf("%f",&cer);
	pcer=cer*5;
	printf("o preco de cerveja:%f",pcer);
	printf("\n");
	printf("numero de doces:");
	scanf("%f",&doce);
	pdoce=doce*3;
	printf("o preco do doce:%f",pdoce);
	printf("\n");
	total=pham+pbt+prefr+pcer+pdoce;
	printf("o preço total:%f",total);
	
		
	return 0;
}
