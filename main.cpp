#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float altura, peso, imc;

	
	
	printf("Digite seu peso \n");
	scanf("%f", &peso);
	
	printf("Digite sua altura \n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5){
	printf (" Voce esta abaixo do peso \n");
	}
	else
	if(imc >= 18.6 && imc < 24.9 ){
	printf ("PARABENS \n Voce esta com peso ideal! \n");
	}
	else
	if(imc >= 25 && imc < 29.9 ){
	printf (" ATENCAO \n Voce esta levemente acima peso! \n");
	}
	else
	if(imc >= 30 && imc < 34.9 ){
	printf ("Obesidade grau I \n");
	}
	else
	if(imc >= 35 && imc < 39.9 ){
	printf ("Obesidade grau II (severa)\n");
	}
	else
	if(imc >= 40){
	printf (" CUIDADO!!!\n Obesidade grau III(MORBIDA)\n");
	}
	

	


	printf(" Seu Imc e %2.f \n", imc);
	
	
	return 0;
}
