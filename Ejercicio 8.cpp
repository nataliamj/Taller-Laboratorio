#include <iostream>

using namespace std;

int main()
{
	int cntnts,i,otro;
	float nota,prmd;
	do{
	
	
		i=1;
		cntnts=6;
	
		do{
			cout<<"Ingrese la "<<i<<" nota:";
			cin>>nota;
		
			prmd=prmd+nota;
			i++;
		
  	  }while(i<=cntnts);
    
  	  prmd=prmd/cntnts;
 	   cout<<"El promedio es: "<<prmd<<endl;
    
 	   if(prmd>3.5){
    		cout<<"Aprobo"<<endl;
		}
	
		else{
			cout<<"No aprobo"<<endl;
		}
	cout<<"Desea ejecutar el programa nuevamente "<<endl;
	cout<<"1. Si"<<endl<<"2. No"<<endl;
	cout<<"Opcion: ";
	cin>>otro;
	
   }while(otro==1);
   
	return 0;
}
