int main(){
	float hora,min,seg,chor,total;
	
	printf("digite o numero de horas\n");
	scanf("%f",&hora);
	printf("digite o numero de minutos\n");
	scanf("%f",&min);
	
	chor=hora*60;
	total=chor+min;
	seg=total*60;
	
	printf("numero de horas em minutos\n %f \n",chor);
	printf("numero total de minutos\n %f \n",total);
	printf("numero total de segundos\n %f \n", seg);
	
	
	return 0;
	
	
}
