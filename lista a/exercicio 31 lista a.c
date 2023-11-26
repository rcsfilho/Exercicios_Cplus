int main(){
	float frangos,chip,alim,total;
	
	printf("digite a quantidade de frangos");
	scanf("%f",&frangos);
	
	chip=frangos*1.2;
	alim=frangos*2*0.8;
	total=chip+alim;
	
	printf("o gasto do total foi:\n %f", total);
	
	return 0;
	
	
	
}

