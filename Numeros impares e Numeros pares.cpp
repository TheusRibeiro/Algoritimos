#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define cMax 12
using namespace std;

int main(){

	int mVetor[cMax],mVetorImp[cMax],mVetorPar[cMax],mImp = 0,mPar = 0;	
	
	for(int i = 0; i < cMax; i++){
	
	    cout<<"DIGITE O "<<( i + 1 )<<" NUMERO :";
	    cin>>mVetor[i];
		
	}
	
	for(int i = 0; i < cMax; i++){
	
	   if(mVetor[i]%2 == 0){
	   	  mVetorPar[mPar] = mVetor[i];mPar++;  	  
	   }else{
	   	  mVetorImp[mImp] = mVetor[i];mImp++;  	  	   	
	   }
		
	}

	cout<<"IMPARES : ";
	
	for(int i = 0;i < mImp;i++){   

       	cout<<mVetorImp[i]<<", ";
		
	}
	
	cout<<"\nPARES : ";
	
	for(int i = 0;i < mPar;i++){   

       	cout<<mVetorPar[i]<<", ";
		
	}

	cout<<"\n";
	
	system("pause");

}

