int main(){
	float px1,px2,py1,py2,var,dist;
	
	printf("os valores da ponto x1:");
	scanf("%f",&px1);
	printf("os valores da ponto y1:");
	scanf("%f",&py1);
	printf("os valores da ponto x2:");
	scanf("%f",&px2);
	printf("os valores da ponto y2:");
	scanf("%f",&py2);
	var=pow(px2-px1,2)+pow(py2-py1,2);
	dist=sqrt(var);
	printf("\n");
	printf("a distancia entre os pontos:%f",dist);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}
