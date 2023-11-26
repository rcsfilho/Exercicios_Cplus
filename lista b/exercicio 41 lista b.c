int main(){
	float peso,pesoreal;
	int planeta;
	printf("entre com seu peso \n");
	scanf("%f",&peso);
	printf("escolha um planeta 1-mercurio 2-venus 3-marte 4-jupiter 5-saturno 6-urano \n");
	scanf("%i", &planeta);

	switch (planeta)
	{
		case 1:
			pesoreal=peso*0.37;
			printf("mercurio %f", pesoreal);
			break;
		case 2:
			pesoreal=peso*0.88;
			printf("venus %f",pesoreal);
			break;
		case 3:
			pesoreal=peso*0.38;
			printf("marte %f",pesoreal);
			break;
		case 4:
			pesoreal=peso*2.64;
			printf("jupiter %f", pesoreal);
			break;
		case 5:
			pesoreal=peso*1.15;
			printf("saturno %f", pesoreal);
			break;
		case 6:
			pesoreal=peso*1.17;
			printf("urano %f", pesoreal);
			break;
		default:
			printf("planeta invalido");
			break;
			
	}
	
	
	return 0; 
}
