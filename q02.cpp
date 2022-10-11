#include<stdio.h>
#include<stdlib.h>
void erro();
int n;
int main (){
	system ("cls");
	printf("Nicole Ciccolani Hirata\n"); 
	printf("Bruna Alves de Amorim\n");
	printf("Questao q02 - Arvore de natal\n");
	
	int i1;
	char res='*';
	int i,x,esp;
	
	printf("Digite um numero impar entre 5 e 49.\n"); 
	scanf("%d",&n);
	if(n%2==0 || n<5 || n>49)
		erro();

	else {
		esp=n/2+1;
		for (i1=0;i1<(n/2)+2;i1++){
			
			for (x=esp;x>=1;x--){
				if (esp!=0){
					printf(" ");
				}
			}
			esp--;
			
			for(i=1;i<=i1*2-1;i++)
	        	printf("%c",res);
	                    
			// faz metade e dps a outra metade        
	        //for(i= (i1-1);i>=1;i--)
	            //printf("%c",res);
			
			printf("\n");
		}
		
		for (esp=0;esp<n/2;esp++)
			printf(" ");
		printf("|");
		printf("\n");
		for (esp=0;esp<(n/2)-1;esp++)
			printf(" ");
		printf("---");
	}
	system("pause");
	return 0;
}

void erro() {
	system ("cls");
	printf("Erro\n"); 
	printf("O numero %d e invalido\n",n); 
	system ("pause");
	main();

}