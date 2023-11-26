int main(){
	
	float nota,maior,menor;
	int contador=0;
	
	while(nota>=0){
		printf("a nota foi");
		scanf("%f",&nota);
		contador=contador+1;
		
		if(nota>=0){
		
		if(contador==1){
			maior=nota;
			menor=nota;
		}else if(nota>maior){
			maior=nota;
		}else if(nota<menor){
			menor=nota;
		}
	}
	
}
	
	printf("a maior nota foi: %f\n",maior);
	printf("a menor nota foi: %f\n",menor);
	
	
	
	return 0;
}
