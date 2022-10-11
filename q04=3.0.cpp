#include<stdio.h>
#include<stdlib.h>
#include <ctime>

int main (){
	printf("Nicole Ciccolani Hirata\n");
	printf("Bruna Alves de Amorim\n");
	printf("Questao 04- Jogo de adivinhacao\n");
	printf("\n");
	int num,x,cont=1,i;
	int min=0, max=0;
	int pal[100000];
	int acerto=0;
		

	printf("Digite um valor minimo:  ");
	scanf("%d",&min);
	printf("Digite um valor maximo maior que o minimo mais 100:  ");
	scanf("%d",&max);
	while (max<(min+100)){
		printf("Digite um valor maximo valido:   ");
		scanf("%d",&max);
	}
	srand(time(NULL));
	num= ((rand() % max) + min-1);
	printf("------------------------------------\n");
	printf("Comecou!!\n");
	printf("Digite seu palpite\n");
	printf("------------------------------------\n");
	while (acerto==0){
		
		printf("\nPalpite %d: %d  ",cont,num);
		scanf("%d", &x);
		
		if (x>max || x<min){
				system("cls");
				printf("------------------------------------\n");
				printf("\nDigite um valor entre %d e %d\n\n",min,max);
				printf("------------------------------------\n");
		}
		else {
			pal[cont]=x;
			if (pal[cont]>num){
				system("cls");
				printf("------------------------------------\n");
				printf("\nDigite um numero menor!\n\n");
				printf("------------------------------------\n");
			}
			
			if (pal[cont]<num){
				system("cls");
				printf("------------------------------------\n");
				printf("\nDigite um numero maior!\n\n");
				printf("------------------------------------\n");
			}
				
		    if (pal[cont]==num)
				acerto=1;
				
			cont++;
		}
			
			
		
		
		
	}
    printf("\nParabens voce acertou!!");
    printf("\nForam %d palpites ate acertar\n",cont-1);
    printf("Seus palpites foram: \n");
    for (i=1;i<cont;i++){
    	
    	if (i==cont-1)
    		printf("%d. ",pal[i]);
    	else
    		printf("%d, ",pal[i]);
	}
	system("pause");
    
	return 0;
}

