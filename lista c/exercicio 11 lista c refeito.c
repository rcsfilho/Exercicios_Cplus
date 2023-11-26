int main(){
	int n=0,c=0,a;
	
	while(c<10){
		
		printf("digite um valor");
		scanf("%i",&a);
		
		if(a>n && c==0){
			n=a;
		}
		c=c+1;
	
	}
	printf("o maior valor e: %i\n",n);
	
	return 0;
	
	
	
	
	
}
