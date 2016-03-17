#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct agenda0 {
	int num;
	char nome [50];
	char tel [20];
};

FILE*arquivo;
struct agenda0 agenda1; 

void incluir(){
	arquivo=fopen("arquivo.txt","a+b");
	
	if (arquivo==NULL){
		printf("erro ao abrir o arquivo");
		return;
	}
		
	printf("_____________________CADASTRAR_____________________\n");
	printf("Numero da inscricao: ");
	agenda1.num++;
	printf("%d\n",agenda1.num);
	printf("\n");
	printf("Informe seu nome:");
	fflush (stdin);					// sempre usar pra limpar as variaveis
	gets(agenda1.nome);
	printf("\n");
	printf("TELEFONE:");
	fflush (stdin);					// sempre usar pra limpar as variaveis
	gets(agenda1.tel);
	fwrite(&agenda1,sizeof(agenda1),1,arquivo);
	fclose (arquivo);
	system ("pause");
} 

void listar (){
	arquivo=fopen("arquivo.txt","rb");
	if (arquivo==NULL){ 
		
		printf ("**********DEU PAU**********\n\n");
		system("pause");
		return;	
	}	
	
	fread(&agenda1,sizeof(agenda1),1,arquivo);
	
	while (!feof(arquivo)){ 					//condição para terminar listar   
		
		printf("\n");
		printf("Inscricao :%d\n",agenda1.num);
		printf("\nNome: %s\n",agenda1.nome);
		printf("\nTelefone %s:\n",agenda1.tel);
		printf("_______________________\n");
		fread(&agenda1,sizeof(agenda1),1,arquivo);	// encerrando listagem 
	}
	
	system("pause");
}

int main(){ 		 
	char opc;

		while(opc<='5'){  // iniciando o laço while
			
			system("cls"); // Limpar tela
		
			printf("******** Agenda ********\n\n");
			printf("\n");
			printf("1- Cadastrar");
			printf("\n");
			printf("2- Listar");
			printf("\n"); 
			printf("3- Buscar");
			printf("\n");
			printf("4- alterar");
			printf("\n");
			printf("5- Sair\n");
			printf("\n");
			printf("Opcao:");
				
			fwrite(&agenda1,sizeof(agenda1),1,arquivo);
			fclose (arquivo); 
			opc=getchar(); 
		
			switch(opc){ // iniciando switch 
				case'1':incluir();
					break;
				case'2':listar();
					break;
				case'3'://buscar();
					break;
				case'5':exit(1);
					break;
			} // encerrando switch 
		}  // encerra o laço while
} // fim programa
