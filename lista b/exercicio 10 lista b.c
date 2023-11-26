int main(){
	
	int id;
	float peso,alt;
	
	printf("insira a idade\n");
	scanf("%i",&id);
	printf("insira o peso\n");
	scanf("%f",&peso);
	printf("insira a altura\n");
	scanf("%f",&alt);
	
	if(id>21 && id<35 && alt>=1.7 && peso>=60 && peso<=95)
	{
		printf("apto");
	}
	else
	{
		printf("inapto");
	}
	
	return 0;
	
	
	
	
}
