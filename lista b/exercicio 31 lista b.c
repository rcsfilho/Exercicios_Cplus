int main(){
	int a,b,resto;
	
	printf("digite uma valor para a:\n");
	scanf("%i",&a);
	printf("digite uma valor para b:\n");
	scanf("%i",&b);
	resto=a%b;
	
	if(resto==0){
		printf("os numeros sao divisiveis");
	}else{
		printf("os numeros não sao divisiveis");
	}
	
	
	return 0;

	
	
}
