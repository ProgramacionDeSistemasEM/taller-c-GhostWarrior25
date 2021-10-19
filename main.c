#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char **argv){

	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}
	
	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	float sum = 0.0f;
	float max_imc = 0.0f;
	float peso = 0.00f;
	float altura = 0.0f;
	float IMC = 0.0f;
	float altcuad = 0.0f;
	int i = 0;
	for (i; i<elementos;i++){
		printf("Peso: ");
		scanf("%.2f", &peso);
		if (peso < 0){
			printf("\nNumero Invalido");
			exit(1);
		}
		printf("\n Altura: ");
		scanf("%.2f", &altura);
		if (altura < 0){
			printf("\nNumero Invalido");
			exit(1);
		}
		IMC = (peso /(altura*altura));
		sum += IMC;
		if (IMC > max_imc){
			max_imc = IMC;
		}
	}
	sum = sum / elementos;


	
	
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
	//linea prueba
	
	
}

