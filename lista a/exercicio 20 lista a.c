int main(){
	float a,b,c,d,e,f,x,y;
	
	printf("digite a\n");
	scanf("%f",&a);
	printf("digite b\n");
	scanf("%f",&b);
	printf("digite c\n");
	scanf("%f",&c);
	printf("digite d\n");
	scanf("%f",&d);
	printf("digite e\n");
	scanf("%f",&e);
	printf("digite f\n");
	scanf("%f",&f);
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	
	printf("valor de x: %f\n",x);
	printf("valor de y: %f\n",y);
	
	return 0;
	
}
