int main(){
	
	float peq,med,grande,litros;
	
	printf("qtd de garrafas pequenas\n");
	scanf("%f",&peq);
	printf("qtd de garrafas medias\n");
	scanf("%f",&med);
	printf("qtd de garrafas grandes\n");
	scanf("%f",&grande);
	
	litros=peq*0.350+med*0.600+grande*2.0;
	printf("qtd de litros comprados \n %f",litros);
	
	return 0;
	
	
	
}
