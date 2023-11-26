int main (){
	int seg,ter,qua,qui,sex,sab,dom,media;
	printf("digite o valor da temperatura seg:");
	printf("\n");
	scanf("%int",&seg);
	printf("digite o valor da temperatura ter:");
	printf("\n");
	scanf("%int",&ter);
	printf("digite o valor da temperatura qua:");
	printf("\n");
	scanf("%int",&qua);
	printf("digite o valor da temperatura qui:");
	printf("\n");
	scanf("%int",&qui);
	printf("digite o valor da temperatura sex:");
	printf("\n");
	scanf("%int",&sex);
	printf("digite o valor da temperatura sab:");
	printf("\n");
	scanf("%int",&sab);
	printf("digite o valor da temperatura dom:");
	printf("\n");
	scanf("%int",&dom);
	media=(seg+ter+qua+qui+sex+sab+dom)/7;
	printf("\n");
	printf("%int",media);
	
	
		return 0;
}
