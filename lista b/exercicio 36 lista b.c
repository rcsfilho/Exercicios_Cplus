int main(){
	
	
float saldo,cred;

printf("digite o valor do saldo medio\n");
scanf("%f",&saldo);

if(saldo>0 && saldo<=500){
	printf("nenhum credito");	
}else if(saldo>=501 && saldo<=1000){
	cred=(saldo*0.30);
	printf("credito vai ser de: %f\n",cred);
}else if(saldo>=1001 && saldo<=3000){
	cred=(saldo*0.40);
	printf("credito vai ser de: %f\n",cred);
}else{
	cred=(saldo*0.50);
	printf("credito vai ser de: %f\n",cred);
}

return 0;


}
