#include <stdio.h>
#include<stdlib.h>

int main (){
	
	printf("Nicole Ciccolani Hirata\n");
	printf("Bruna Alves de Amorim\n");
	printf("Questao 01 - estoque\n\n\n");
	
	int codigo, qtd,  invalido[10000];
	int continuar=1,a,x=0,cont;
	double vFem, vMasc, vInfa,preco ,valor;
	
	while(continuar!=0){
		printf("Digite o codigo do produto: ");
		scanf("%d",&codigo);
		if (codigo==0){
			continuar=0;
		}
		else {
			printf("Digite a quantidade de produtos: ");
			scanf("%d",&qtd);
			printf("Digite o preco unitario do produto: ");
			scanf("%lf",&preco);
			
			printf("\n\n");
			
			valor=preco*qtd;
		
			if (codigo<=999999){
			 	invalido[x]=codigo;
				x++;
			}
			else{
				
				a=codigo / 10000;
				
				if(a>=100 && a<=399){
				vInfa=vInfa+valor;
				}
				else if (a>=400 && a<=799){
					vFem=vFem+valor;
				}
				else if(a>=800 && a<=999){
					vMasc=vMasc+valor;
				}
				else {
					invalido[x]=codigo;
					x++;
				}
			} 
		}
		
	
	}
	
	
	system("cls");
	printf("\n\nSUBTOTAIS\n");
	printf("\tLinha infantil = R$%.2lf\n",vInfa);
	printf("\tLinha feminina = R$%.2lf\n",vFem);
	printf("\tLinha masculina = R$%.2lf\n",vMasc);
	
	printf("\n\nTOTAL GERAL\n");
	printf("\tTotal = R$%.2lf\n",(vInfa+vFem+vMasc));
	
	if (x==0){
		printf("\n\nINCONSISTENCIAS\n");
		printf("\tNao ha inconsistencias\n");
	}
	else {
		printf("\n\nINCONSISTENCIAS\n");
		for(cont=0;cont<x;cont++){
			printf("\tCodigo invalido: %d\n",invalido[cont]);
		}
		
	}
	
	
	system("pause");
}
