int main(){
	
	int a,b,c,d,r,s;
	
	printf("digite o valor de a\n");
	scanf("%i",&a);
	printf("digite o valor de b\n");
	scanf("%i",&b);
	printf("digite o valor de c\n");
	scanf("%i",&c);
	
	r=pow(a+b,2);
	s=pow(b+c,2);
	d=(r+s)/2;
	
	printf("digite o valor de d:\n %i",d);
	
	return 0;
	
	
}
