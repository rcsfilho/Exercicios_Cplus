int main(){
		
	int=c1, c5, c10, c50, quantia;
	
	printf("digite quantia:");
	scanf("%i", &quantia);
	
	c50=quantia/50;
	quantia=quantia%50;
	c10=quantia/10;
	quantia=quantia%10;
	c5=quantia/5;
	quantia=quantia%5;
	c1=quantia/1;
	quantia=quantia%1;
	
	printf("50=%i 10=%i 5=%i 1=%i\n",c50,c10,c5,c1);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
