#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int nmr,sumpar,cantnmrs,i,prdimp,potpar,potimpppar,imp,sumneg;
	sumpar=0;
	i=1;
	prdimp=0;
	sumneg=0;
	potimpppar=0;
	
	cout<<endl<<"Ingrese la cantidad de numeros con los cuales desea hacer las operaciones: ";
	cin>>cantnmrs;
	
	do{
		cout<<endl<<"Ingrese un numero: ";
		cin>>nmr;
		imp=0;
		
        if((nmr>-1000)&&(nmr<1000)){
        	
        	if(nmr%2==0){
        		sumpar=sumpar+nmr;
        	
        	}
        	
        	else{
        		prdimp=prdimp+nmr;  
				cout<<"Ingrese la potencia a la cual quiere elevar el numero impar, tenga en cuenta que el numero debe ser par: ";
				cin>>potpar; 
				imp=imp+nmr;		
			}
			
		}else{
			cout<<"El numero ingresado es mayor a 1000 o menor a -1000"<<endl;
		}
		
		if((potpar%2==0)&&(nmr%2!=0)){
			potimpppar=pow(imp,potpar);
			cout<<"La potencia par del "<<i<<" numero impar es: "<<potimpppar<<endl<<endl;
			

		}
		else{		
		}
		
		if(nmr<0){
			sumneg=sumneg+nmr;
			
		}
		i++;
	}while(i<=cantnmrs);
	
	cout<<endl<<"La suma de los numeros pares es: "<<sumpar<<endl;
	cout<<"El producto de los numeros impares es: "<<prdimp<<endl;
	cout<<"La suma de los numeros negativos es: "<<sumneg<<endl;
	
	return 0;
	
}
