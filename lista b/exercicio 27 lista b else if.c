int main(){
	
	int dia;
	printf("digite um numero:");
	scanf("%i", &dia);
	
	if(dia==1)
	{
		printf("domingo\n");
	}
	else if(dia==2)
	{
		printf("segunda\n");
	}
	else if(dia==3)
	{
		printf("terça\n");
	}
	else if(dia==4)
	{
		printf("quarta\n");
	}
	else if(dia==5)
	{
		printf("quinta\n");
	}
	else if (dia==6)
	{
		printf("sexta\n");
	}
	else if(dia==7)
	{
		printf("sabado\n");
	}
	else if (dia<=0 || dia>7)
	{
		printf("erro\n");
	}
	
	
	return 0;
}
