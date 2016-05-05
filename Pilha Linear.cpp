#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int top = -1;
int pilha1[30];
int pilha2[30];
int cont;
int resto;

void inserir(){
	int num;
	
    cout << "Digite um valor: " << endl;
    cin >> num;
    
    do{
    	
    pilha2[cont] = num % 2;
    num = num / 2;
    pilha1[cont] = num;
    //out << pilha1[cont] << "\t";
    //cout << "[" << pilha2[cont] << "]\t ";

    cont = cont + 1;
    	
	}while(num != 0);
	
}
void mostrar(){
	cont -1;
	for(int i=cont; i>=0;i--){
		
		cout << "\t" << pilha2[i] << "\t";
	}
}

void remover(){
	cont = cont -1;
	
	for(int i=cont; i>=0;i--){
		
		cout << "\t" << pilha2[i] << "\t";
	}
}

int main(){
    int num,op;
    cout << "--- MENU ---" << endl << endl;

	cout << "1- Inserir " << endl;
	cout << "2- Mostrar " << endl;
	cout << "3- Remover " << endl;
	cout << "4- sair " << endl;
	
	do{
	
	
	cout << "\nDigite: ";
	cin >> op;
	
	switch (op){
		case 1:
			inserir();
			break;
		case 2: mostrar();
			break;
		case 3: 
			remover();
		case 4:
			return 0;
		default:
			cout << "opcao invalida.";
	}
	
}while(op !=4);


    return 0;
}

