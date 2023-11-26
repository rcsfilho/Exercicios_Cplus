int main(){
	
	float seg,horas;
	
	printf("digite segundos:");
	scanf("%f",&seg);
	
	if(seg>0){
		horas=seg/3600;
		printf("valor em horas %f", horas);
	}else{
		printf("erro");
	}
	
	
	
	return 0;
}
