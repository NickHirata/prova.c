#include<stdio.h>
#include <stdlib.h>
void erroMin();
	int min;
void erroMax();

int main(){
	int max, primo[1000],cont,i=1,soma=0;
	int div=1,nuprimo=0;
	system("cls");
	printf("Bruna Alves de Amorim\n");
	printf("Nicole Ciccolani Hirata\n");
	printf("Questao 03 - Numeros primos\n");
	
	
	printf("\nDigite um valor minimo:\n");
	scanf("%d",&min);
	
	if(min <= 1){
		erroMin();	
	}
	else{
		printf("Digite um valor maximo:\n");
		scanf("%d",&max);
		while(max <= min){
			system("cls");
			printf("Digite um valor maior que %d:\n",min);
			scanf("%d",&max);
		}
		for (cont=min;cont<=max;cont++){
			if (cont == 2 || cont % 2 != 0){
				div = 3;
				nuprimo=1;
	    		while (div <= cont / 2) {
					if (cont % div == 0){
						nuprimo=0;
						// nao é primo
					}	
				div = div + 2;		
	    		}
	    		
	    		if(nuprimo==1 ){
	    			primo[i]=cont;
					soma=soma+cont;
					printf("\nprimos = %d\n",primo[i]);
					i++;
	    			
				}   
				
			}
	
		}
		
		
		if (nuprimo==0){
			printf("\n\nNao ha numero primo\n\n");
		}
		else {
			printf("\n\nQuantidade de numeros primos do intervalo [%d,%d] = %d\n",min,max,i-1);
			printf("Soma dos numeros primos no intervalo [%d,%d] = %d\n",min,max,soma);	
		}
	}
		
	system("pause");	
	return 0;
}

void erroMin(){
	system("cls");
	printf("Digite um valor maior que 1.\n");
	system("pause");
	main();
}

