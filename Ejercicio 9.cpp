#include <iostream>

using namespace std;

int main()
{
	int cntnts,i,otro,cntestaprb,cntestreprb;
	float nota,prmd;
	cntestaprb=0;
	cntestreprb=0;
	
	do{
	
	
		i=1;
		cntnts=6;
		prmd=0;
	
		do{
			cout<<"Ingrese la "<<i<<" nota:";
			cin>>nota;
		
			prmd=prmd+nota;
			i++;
		
  	  }while(i<=cntnts);
    
  	  prmd=prmd/6;
 	   cout<<"El promedio es: "<<prmd<<endl;
    
 	   if(prmd>3.5){
    		cout<<"Aprobo"<<endl;
    		cntestaprb=cntestaprb+1;
		}
	
		else{
			cout<<"No aprobo"<<endl;
			cntestreprb=cntestreprb+1;
		}
	cout<<"Desea añadir otro estudiante "<<endl;
	cout<<"1. Si"<<endl<<"2. No"<<endl;
	cout<<"Opcion: ";
	cin>>otro;
	
   }while(otro==1);
   
   cout<<"La cantidad de estudiantes que aprobo fue de: "<<cntestaprb<<endl;
   cout<<"La cantidad de estudiantes que reprobo fue de: "<<cntestreprb<<endl;
   
   
	return 0;
}
