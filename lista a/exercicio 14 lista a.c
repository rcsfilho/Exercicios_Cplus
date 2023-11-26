int main(){
	float dis,tempo,vel,litro;
	
	printf("tempo de viagem:\n");
	scanf("%f",&tempo);
	printf("velocidade media da viagem:\n");
	scanf("%f",&vel);
	dis=tempo*vel;
	printf("distancia percorrida:%f\n",dis);
	litro=dis/12;
	printf("quantidade de litros utilizados:%f\n",litro);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
