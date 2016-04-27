#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

char fila[6];  	//variaveis globais
int inicio, fim, op,qtde;

//prototipos das funcoes para execucaoo no int main.
void inserir(char ch);
char remover( );
void pesquisar( );
void listar( );

int main(){
	inicio = 0; //indice para o inicio da fila
	fim = -1; //indice para o fim da fila
	op = 0;
	char ch; 

	while (op != 5){
		cout << "|           Fila Linear - Menu          |" << endl;
		cout << " ---------------------------------------" << endl;
		cout << "1 - Inserir na fila"   << endl;
		cout << "2 - Remover da fila"   << endl;
		cout << "3 - Pesquisar na fila" << endl;
		cout << "4 - Listar a fila"     << endl;
		cout << "5 - Sair"     << endl  << endl;
		cout << "Escolha uma opcao: ";

		cin >> op;

		switch (op){

			case 1: cout << "\nDigite um caractere para inserir: ";
					cin >> ch; //recebe um caractere p/ inserir
					inserir(ch); //chama a funcoa inserir
					break;
			case 2: ch = remover( ); //chama a funcao remover sem parametros
			cout << "\nCaractere removido : " << ch;
			break;
	 		case 3: pesquisar( ); //chama a funcao pesquisar sem parametros
	 		break;
	 		case 4: listar( ); //chama a funcao pesquisar sem parametros
	 		break;
	 		case 5: exit(1); // Finaliza programa

	 		default: cout << "\nOpcao invalida." << endl;
	 	} 
	}
}	

void inserir(char ch){
	if (qtde == 6){ 
		cout << "\nFila cheia" << endl << endl;
		return;
	} if (fim == 5){
		fim = 0;
	} else {
		fim ++;
	}

		fila[fim] = ch; 
		qtde++; 
}

char remover(){
	char ch;
	if (qtde == 0){
		cout << "\nFila vazia" << endl << endl;
		return ' ';
	}

	ch = fila[inicio]; // Remove da posicao inicio da fila
	qtde --; // Um item a menos na fila
	if (inicio == 5){
		inicio = 0;
	} else { // Posiciona inicio na primeira posição
		inicio++;
	} // Posiciona inicio na proxima posicao
	return ch; // Retorna o caratere removido
}

void pesquisar(){
	int i,achou=0;
	char ch; 

	if (qtde< inicio){
		cout << "\nFila vazia" << endl << endl;
		return;
	}

	cout << "\nDigite um caractere a pesquisar: ";
	cin >> ch;
	for (i=inicio; i<=qtde; i++){
		if (fila[i] == ch){
			cout << "\nEste caractere esta na posicao: " << i << endl << endl;
			achou++;
		}

	}
	if (achou == 0){
		cout << "\nEste caractere não existe na fila." << endl << endl;
	}
}

void listar(){
	int i;
	if (qtde < inicio){
		cout << "\nFila vazia" << endl << endl;
		return;
	}
	cout << "\nRelacao dos caracteres armazenados na fila linear: ";

	for (i=inicio; i<=qtde; i++){
		cout << "\t" << fila[i];
	}
	cout << endl << endl;
}
