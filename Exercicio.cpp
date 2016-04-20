#include <iostream>
using namespace std;

char fila[6];
int inicio, fim, op,qtde;

void inserir(char ch){
 	if (qtde == 6){ //já existem 6 elementos na fila???
 		cout << "\nFila cheia";
 		return;
 	} if (fim == 5){
 		fim = 0;
	} else {// posiciona fim na primeira posição da fila
		fim ++;
	} //posiciona fim na próxima pos.da fila
		fila[fim] = ch; //insere a letra na posição fim da fila
		qtde++; //mais um valor inserido
}

char remover(){
	char ch;
	if (qtde == 0){
		cout << "\nFila vazia";
		return ' ';
	}

	ch = fila[inicio]; //remove da posição inicio da fila
	qtde --; //um item a menos na fila
	if (inicio == 5){
		inicio = 0;
	} else {//posiciona inicio na primeira posição
		inicio++;
	} //posiciona inicio na próxima posição
	return ch; //retorna o caratere removido
}

void pesquisar(){
	int i,achou=0;
	char ch; 
	if (qtde< inicio){
		cout << "\nFila vazia";
		return;
	}

	cout << "\nDigite um caractere a pesquisar: ";
	cin >> ch;
	for (i=inicio; i<=qtde; i++){
		if (fila[i] == ch){
			cout << "\nEste caractere esta na posicao: "<< i;
		}

	}
	if (achou == 0){
		cout << "\nEste caractere não existe na fila...";
	}
}

void listar(){
	int i;
	if (fim < inicio)
		{cout << "\nFila vazia";
	return;
}
cout << "\nRelacao dos caracteres armazenados na fila linear";

for (i=inicio; i<=fim; i++){
	cout << "\t"<< fila[i];
}

int main(){
	
 inicio = 0; //índice para o inicio da fila
 fim = -1; //índice para o fim da fila
 op = 0;
 char ch; 

 while (op != 5){
 	cout << "\t Fila Linear - Menu" << endl;
 	cout << "-----------------------------------------" << endl;
 	cout << "1 - Inserir na fila" << endl;
 	cout << "2 - Remover da fila" << endl;
 	cout << "3 - Pesquisar na fila" << endl;
 	cout << "4 - Listar a fila" << endl;
 	cout << "5 - Sair" << endl  << endl;
 	cout << "Escolha uma opcao: ";

 	cin >> op;

 	switch (op){
 		case 1: cout << "\nDigite um caractere para inserir: ";
				cin >> ch; //recebe um caractere p/ inserir
				inserir(ch); //chama a função inserir
				break;
				cout << "\nCaractere removido : " << ch; 

				case 2: 
		 		ch = remover( ); //chama a função remover
		 		break; 

		 		case 3: 
		 		pesquisar( ); //cj
		 		break;

		 		case 4: 
		 		listar ( ); 
		 		break;

		 		case 5: 
		 		break; 
		 		default: cout << "\nOpcaoo invalida";
		 	} 
		 }
		}	
	}