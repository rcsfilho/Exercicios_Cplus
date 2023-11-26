int main(){
	int dia;
	printf("digite um numero:");
	scanf("%i", &dia);
	if(dia==1){
		printf("segunda feira");
	}else{
		if(dia==2){
			printf("terça feira");
		}else{
			if(dia==3){
				printf("quarta feira");
			}else{
				if(dia==4){
					printf("quinta feira");
				}else{
					if(dia==5){
						printf("sexta feira");
					}else{
						if(dia==6){
							printf("sabado");
						}else{
							if(dia==7){
								printf("domingo");
							}else{
								if(dia<=0 || dia>7){
									printf("erro");
								}
							}
						}
					}
				}
			}
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
