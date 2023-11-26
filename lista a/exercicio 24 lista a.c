int main(){
	float pao,broa,ppao,pbroa,total,poup;
	
	printf("digite a quantidade paes vendidos\n");
	scanf("%f",&pao);
	printf("digite a quantidade broas vendidas\n");
	scanf("%f",&broa);
	
	ppao=pao*0.12;
	pbroa=broa*1.50;
	total=pbroa+ppao;
	poup=total*0.10;
	
	printf("o total arrecadado foi: \n%f\n",total);
	printf("o total poupado foi:\n%f",poup);
	
	return 0;
	
	
	
	
	
}
