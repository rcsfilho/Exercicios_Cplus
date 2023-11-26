int main(){
	float nota;
	
	printf("digite a nota do aluno\n");
	scanf("%f",&nota);
	if(nota>=9){
		printf("A");
	}else{
		if(nota>=7){
			printf("B");
		}else{
			if(nota>=5){
				printf("C");
			}else{
				if(nota>=2){
					printf("D");
				}else{
					printf("E");
				}
			}
		}
	}
	
	
	return 0;
	
	
}
