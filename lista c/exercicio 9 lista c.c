int main(){

int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%i", &n);
fat=1;

while(n>1){
	fat=fat*n;
	n=n-1;
}
printf("o fatorial: %i\n",fat);

return 0;

}
