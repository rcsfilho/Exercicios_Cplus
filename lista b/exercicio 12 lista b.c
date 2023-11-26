int main(){
	
	int n1, n2, n3;
	
	printf("Insira tres numeros aleatorios \n");
	scanf("%i", &n1);
	scanf("%i",&n2);
	scanf("%i",&n3);
	if(n1<n2 && n1<n3 && n2<n3 && n2>n1){
		printf("%i %i %i", n1, n2, n3);
	}else{
		if(n2<n1 && n2<n3 && n1<n3){
			printf("%i %i %i", n2, n1, n3);
		}else{
			if(n3<n2 && n3<n1 && n2<n1){
				printf("%i %i %i", n3, n2, n1);
			}else{
				if(n2<n3 && n2>n1 && n3<n1){
				printf("%i %i %i", n2, n3, n1);
			}else{
				if(n3<n2 && n3<n1 && n1<n2){
				printf("%i %i %i", n3, n1, n2);
				}else{
					if(n1<n2 && n1<n3 && n3<n2){
					printf("%i %i %i", n1, n3, n2);
					}
				}
			}
		}
	}
}	
return 0;
}
