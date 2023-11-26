int main(){
	float id,cod,unit,qtd,com,total;
	printf("digite id\n");
	scanf("%f",&id);
	printf("digite cod\n");
	scanf("%f",&cod);
	printf("digite unit\n");
	scanf("%f",&unit);
	printf("digite qtd\n");
	scanf("%f",&qtd);
	
	total=unit*qtd;
	com=total*0.05;
	printf("o valor da comissao:%f",com);
	
	return 0;
	
	
	
}
