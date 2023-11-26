int main(){
	
	float a,b,c;
	
	printf ("digite um valor:");
	scanf("%f",&a);
	printf ("digite um valor:");
	scanf("%f",&b);
	printf ("digite um valor:");
	scanf("%f",&c);
	
	if(a>b && a>c){
		printf("a");
	}else{
		if(b>a && b>c){
			printf("b");
		}else{
			printf("c");
		}
	}
	return 0;
	
	
	
	
}
