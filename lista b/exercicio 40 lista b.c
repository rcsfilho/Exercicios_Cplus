int main(){
	
	int dia;
	printf("entre com um valor de 1 a 7 para saber o dia correspondente: \n");
	scanf("%i",&dia);
	switch (dia)
	{
		case 1:
			printf("domingo\n");
			break;
		case 2:
			printf("segunda\n");
			break;
		case 3:
			printf("terça\n");
			break;
		case 4: 
			printf("quarta\n");
			break;
		case 5:
			printf("quinta\n");
			break;
		case 6:
			printf("sexta\n");
			break;
		case 7:
			printf("sabado\n");
			break;
		default:
			printf("dia invalido");
			break;
			
	}
	return 0; 
}
