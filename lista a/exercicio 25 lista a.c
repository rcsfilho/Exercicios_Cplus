int main(){
	
float tanque, gasval, valorpago;

   printf("Digite o preço da gasolina:\n");

   scanf("%f",&gasval);

   printf("Digite quanto voce pagou:\n");

   scanf("%f",&valorpago);

   tanque = valorpago/gasval;

   printf("Voce colocou no seu veiculo %f de gasolina.",tanque);

   return 0;
		
}
