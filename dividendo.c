#include <stdlib.h>
#include <stdio.h>

int main() {
	 
	
	int d1,d2,q,r;
	char nome[50],sim;
	
	system("cls");
	printf("Incira seu nome: \n");
	scanf("%s", &nome);
	fflush(stdin);
		do{
		system("cls");
		printf("Insira um numero :");
		scanf("%d",&d1);
			fflush(stdin);
		printf("Insira um numero :");
		scanf("%d",&d2);
		fflush(stdin);
		system("cls");
		
		printf("%s o resultado entre a divisao entre %d e %d foi:\n\n" , nome,d1,d2);
		q = d1/d2;
		r= d1-q*d2;
		printf(" Resto = %d\n",r);
		printf(" Quociente = %d\n\n",q);
			if(r==0){
				printf("%s sua divisao ficou exata!\n\n",nome);
			}
			else{
				printf("%s sua divisao teve um resto\n\n o resto foi: %d \n\n",nome,r);
			}
		
		printf("Quer fazer novamente?\n Digite (S) para continuar...");
		scanf("%c" ,&sim);
		fflush(stdin);
		
		}while(sim=='s'||sim=='S');
	
	
	
	
	
}

	
