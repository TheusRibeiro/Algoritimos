#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
struct estrutura{
	int num[10];

}num;


void cadastrar_vetor(int *p){

	int i;
	cout <<"\n*************************************************";
	cout <<"\n************ CADASTRE OS VETORES ****************";
	cout <<"\n*************************************************\n\n";
	for( i=0; i<10 ; i++){
		cout << " Vetor [" << i << "]: ";
		cin >> p[i];

	}
system("cls || clear");
return;
}

void visualisar_vetor(int *p){
	int i;

	cout << "\n**************************************************";
	cout << "\n************* VISUALIZAR VETORES *****************";
	cout << "\n**************************************************\n\n";

	for( i=0; i<10 ; i++){

		cout << " Vetor [" << i << "]= " << p[i] << "\n";

	}
    cout << "Pressione Enter para voltar...";
	getchar();getchar();
	system("cls || clear");
	return;

}

int trocar_numero(int *p){

	int i, a, cont;
	cont =0;
	cout <<"\n*************************************************";
	cout <<"\n************ TROCAR NUMERO VETOR ****************";
	cout <<"\n*************************************************\n\n";

	cout << "\n Digite o numero do vetor que deseja trocar: ";
	cin >> a;

	if(a < 10){
		cout << "\n Digite o numero a trocar do vetor [" << a <<"]: ";
		cin >> p[a];
		cont++;

	}else{
		cout<< "\n Numero do vetor invalido...\n\n";
	}
	return cont;
}


void numeros_primos(int *p){
	int num, i, j, cont, num_cont;

  	cout <<"\n*************************************************";
	cout <<"\n************ NUMEROS PRIMOS ****************";
	cout <<"\n*************************************************\n\n";

  for(j=0;j<10;j++){

    i = 2;

 	cont = 0;

	if(p[j] !=1 ){

    while ((i < p[j]) ) {
      if ( p[j] % i == 0  ) {
        cont++;

      }
      i++;

    }

    if (cont > 0) {
      num_cont++;

    }
    else {
      printf("\n Vetor[%d]= %d e primo.",j, p[j]);

    }
  }
}
    cout << "\n\nPressione Enter para voltar...";
	getchar();getchar();
	system("cls || clear");
	return;
}

void crescente(int *p){
	int aux = 0;

	for(int i = 0; i<10; i++)
	for(int j = 0; j<10; j++){

		if(p[i] < p[j]){

			aux = p[i];
            p[i] = p[j];
            p[j] = aux;
		}
	}
	system("cls || clear");
	return;
}

int iguais(int *p, int aux){
	int i, j, qqt;

	for( qqt=0,i=0; i<10 ; i++){
	if(aux == p[i]){

    qqt++;
    }
	}
    return qqt;
	cout << "\n\n";
    cout << "Pressione Enter para voltar...";
	getchar();getchar();
	system("cls || clear");

}

int main(){
	int op;
	int *pont =num.num;
	int qqt, aux, aux1;

	do{
	cout << "\n ------- MENU - Escolha uma opcao -------\n";
	cout << "\n 1- Receber um conjunto de números inteiros";
	cout << "\n 2- Visualizar os valores do vetor";
	cout << "\n 3- Substituir numero de um vetor";
	cout << "\n 4- Visualizar números primos";
	cout << "\n 5- Procurar números iguais";
	cout << "\n 6- Classificar em ordem crescente";
	cout << "\n 7- Sair do programa";
	cout << "\n\n Digite uma opcao: ";
	cin >> op;

	switch (op){ // Menu que chama as funcoes

		case 1:
			system("cls || clear");
			cadastrar_vetor(pont);
			break;
		case 2:
			system("cls || clear");
			visualisar_vetor(pont);
			break;
		case 3:
			system("cls || clear");
			int nt;
			nt = trocar_numero(pont);
			aux1 = aux1 + nt;
			cout << "\n --------------------------------";
			cout << "\n Numero de trocas: " << aux1;
			cout << "\n --------------------------------\n";
            cout << "\nPressione Enter para voltar...";
            getchar();getchar();
            system("cls || clear");
			break;
		case 4:
			system("cls || clear");
			numeros_primos(pont);

			break;
		case 5:
			system("cls || clear");
			cout <<"\n\n***********************************************";
			cout <<"\n************* Vetores iguais ******************";
			cout <<"\n***********************************************\n\n";
            cout << "\n Digite o numero para saber quantas vezes ele repitiu: ";
            cin >> aux;
			qqt = iguais(pont,aux);

			if(qqt == 0){
			cout << "\n --------------------------------";
			cout << "\n NAO HA NUMEROS REPITIDOS ...";
			cout << "\n --------------------------------\n";
            cout << "\nPressione Enter para voltar...";
            getchar();getchar();
            system("cls || clear");
			}
			if(qqt >1){

			cout << "\n --------------------------------";
			cout << "\n Quantidades de repeticoes do numero ("<< aux <<")= "<< qqt << " vezes";
			cout << "\n --------------------------------\n";
            cout << "\nPressione Enter para voltar...";
            getchar();getchar();
            system("cls || clear");
			}
			break;
		case 6:
			crescente(pont);
			cout << "Numeros organizados com sucesso!\n";
            cout << "\nPressione Enter para voltar...";
            getchar();getchar();
            system("cls || clear");
			break;
		case 7:
			return 0;
		// terminar de fazer o menu switch
	}

}while( op !=7);

	return 0;
}


