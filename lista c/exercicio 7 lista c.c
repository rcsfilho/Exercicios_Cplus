int main(){
	int co=0,cb=0,cr=0,cp=0;
	float cg;
	char resp=' ';
	
	while(resp!='-'){
		printf("Diga o que achou do refrigerante: O-otimo B-bom R-regular e U-ruim. Digite - para sair\n");
		scanf("%c",&resp);
		getchar();
		
		switch (resp){
			case'o':
				co++;
				break;
			case'b':
				cb++;
				break;
			case'r':
				cr++;
				break;
			case'u':
				cp++;
				break;
		}//switch
	}//while
	cg=co+cb+cr+cp;
	printf("%f\n",co/cg*100.0);
	printf("%f\n",cb/cg*100.0);
	printf("%f\n",cr/cg*100.0);
	printf("%f\n",cp/cg*100.0);
	printf("\n");
	if(co+cb>cr+cp){
		printf("mais gente gostou!");
	}else{
		printf("menos gente gostou!");
	}//condição if
	
	printf("\n");
	printf("otimo:%i\n",co);
	printf("bom: %i\n",cb);
	printf("regular: %i\n",cr);
	printf("ruim: %i\n",cp);
	printf("total geral: %f\n",cg);
	
	return 0;
	
	
	
}
