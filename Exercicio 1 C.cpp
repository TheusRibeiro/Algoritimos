#include<ctype.h>
#include <iostream>
using namespace std;
#include <stdio.h>  
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
   char texto[50];
   void recebe(char *texto);
   int menu(int x);
   void visualiza(char *texto);
   void convertermais(char *texto);
   void convertermin(char *texto);
   void crip(char *texto);
   void descrip(char *texto);
   void subs(char *texto);
   int cont(char *texto);
   void inver(char *texto);
   	
   int main (){
   	
   	
   	printf("********************* Matheus Sistemas - 2015 ***************************\n\n");
   	
   	
   	int x,zzz;
   	recebe(texto);
	printf("\n\t\t   Escolha uma opcao do menu :\n");
    	do{
		
    	printf("\n1- Recebe uma String \n");
		printf("2- Visualizar o string no vetor \n");
		printf("3- Converter os caracteres para maiusculos \n");
		printf("4- Converter os caracteres para minusculos \n");
		printf("5- Criptografar as vogais \n");
		printf("6- Descriptografas as vogais \n");
		printf("7- Substituir uma letra \n");
		printf("8- Contar a quantidade de caracteres do string\n");
		printf("9- Inverter os caracteres do string no vetor\n");
		printf("10- Sair do programa \n");
		scanf("%d",&x);
	   getchar();
	   
	      switch(x){
	      	    case 1 : 
	      	    system("cls");
	                recebe(texto);	        
	      	        break;	      	
	      	    case 2 :
	      	    	system("cls");
     	            visualiza(texto);     	 
     		        break;     		
     		    case 3:
     		    	system("cls");
    	            convertermais(texto);
   			        break;			
			    case 4:
			    	system("cls");
		            convertermin(texto);
		 			break;
			    case 5:
			    	system("cls");
		            crip(texto);		
			        break;			
				case 6:
					system("cls");
		            descrip(texto);		
			        break;			
				case 7:
					system("cls");
		           subs(texto);		
			       break;			
				case 8:	
				system("cls");	
		            zzz = cont(texto);
		            printf("\n Seu vetor tem %d Posicoes ",zzz);	
		            getchar();		
			        break;			
				case 9:
					system("cls");
		            inver(texto);		  
			    break;			
				case 10:
		            exit(0);
			        break;
			
		    	default :
			        exit(0);
	     	}
	   }while(x>=0 && x <=10);	 
	   exit(0); 		      
	}
	
	 
   void recebe(char *texto){
   	system("color 71");
	printf("Digite uma string ate 50 caracteres:  ");
	cin.getline(texto,49);
	
	printf("\t\t- Precione enter para acessar o menu -");
	getchar();
	   }

	  
void visualiza(char *texto){
	printf("\n-Sua String no vetor : ");
	printf("%s",texto);
	printf("\t\t\t\n\n -Aperte Enter Para Menu -");
	getchar();
   }
   
   
   
void convertermais(char *texto){ 
    	
   	for(int i=0;texto[i]!='\0';i++){         
    texto[i]=toupper(texto[i]);
     }
}



void convertermin(char *texto){  	
   	for(int i=0;texto[i]!='\0';i++){	            
    texto[i]=tolower(texto[i]);
     }
}


 void crip(char *texto){
 	
 	    char crip[5]={'e','i','o','u','a'};
 	    char crip1[5]={'i','o','u','a','e'};
	  	
		  for(int i=0;texto[i]!='\0';i++){
	  	
 		    for(int j=0;j<=4;j++){
		       if(texto[i]==crip[j]){
		       	  texto[i]=crip1[j];
		  	      break;
		        }
            }
   	    }
 }
 
 void descrip(char *texto){
 	
 	    char crip[5]={'e','i','o','u','a'};
 	    char crip1[5]={'i','o','u','a','e'};
	  	
		  for(int i=0;texto[i]!='\0';i++){
	  		for(int j=0;j<=4;j++){
		       if(texto[i]==crip1[j]){
		       	  texto[i]=crip[j];
		  	      break;
		         }
     	     }
     
	       }
	 
 }
 
 void subs(char *texto){
 	char x;
 	char y;
 	
 	printf("Escola uma letra do vetor: ");
    
	scanf("%c",&x);
    for(int i = 0;;i++){
    	if(texto[i]==x){
    		printf("Escolha uma letra para substituir: ");
       		  getchar();
			   scanf("%c",&y);
    	   
    		texto[i]=y;
    		
    		break;	
			}
			
		}
	}
	
	int cont(char *texto){
		
		int i=0;
		 
	    while(texto[i]!='\0'){
	        i++;
		  	
		}
		return i;
	}

	void inver(char *texto){
		char inv[50];
	
	
		for(int i=0;;i++){
			if(texto[i]=='\0'){
				
                for(int j=i-1,k=0;j>=0;j--,k++){
                	inv[k]=texto[j];
               
				}	
			    inv[i]='\0';
				    for(int t=0;t<=i;t++){
				    	texto[t]=inv[t];
					}
				break;			
			}			      
		  
			}
			
		
		printf("\t\t\t\n\n-Precione Enter para voltar ao menu -\n");
		getchar();
				
			
	}
