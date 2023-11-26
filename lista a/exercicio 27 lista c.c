int main(){
	float qpq,qmd,qgr,total;
	
	printf("quantas camisetas pequenas foram vendidas:\n");
	scanf("%f",&qpq);
	printf("quantas camisetas medias foram vendidas:\n");
	scanf("%f",&qmd);
	printf("quantas camisetas grandes foram vendidas:\n");
	scanf("%f",&qgr);
	
	total=qpq*20+qmd*24+qmd*28;
	printf("foram arrecadados:\n %f \n",total);
	
	
	return 0;
	
	
	
}
