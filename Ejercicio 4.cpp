#include <iostream>

using namespace std;

int main()
{
	int n,par,impar,i,imparc,c;
	long double factorial;
    cout<<"Digite un numero: ";
    cin>>n;
   
    
    if(n%2==0){
        cout<<"El numero es par"<<endl;
        i=1;
        c=n;
    
        
        while(i<7){
             n=n*c;
             i++;
        }
        cout<<"El numero elevado a la potencia 7 es: "<<n<<endl;
		
	
	}
	else{
	    cout<<"El numero es impar "<<endl;
		factorial=1;
		for(i=1;i<=n;i++){
		
        factorial=factorial*i;
		    
		}
        cout<<"El factorial del numero es : "<<factorial<<endl;
      }
		
	
	
	
    return 0;
}
