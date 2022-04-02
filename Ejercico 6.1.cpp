#include <iostream>
using namespace std;

int main(){
	 
	 float vlr,vlrtotal,vlrunt,prcfnl;
	 int opc,opc2,opc3;
	 cout<<"De cual de las prendas conoce el valor"<<endl;
	 cout<<"1. Cinturon"<<endl;
	 cout<<"2. Camisa"<<endl;
	 cout<<"3. Zapatos"<<endl;
	 cout<<"4. Corbata"<<endl;
	 cin>>opc;
	
	 
	
	 
	 
	 cout<<"Digite el valor de la prenda: ";
	 cin>>vlr;
	 prcfnl=prcfnl+vlr;
	 
	 switch(opc){
	 	case 1: 
	 		vlrtotal=(5*vlr);
	 		break;
	 	
	 	case 2:
	 		vlrtotal=(vlr/2)*6;
	 		break;
	 		
	 	case 3:
	 		vlrtotal=(2*vlr);
	 		break;
	 		
	 	case 4: 
	 		vlrtotal=(6*vlr);
	 		break;
	 }
	 
	 do{
	 	
	 	cout<<"Elija la opcion qur corresponda a la prenda que va llevar"<<endl;
	 	cout<<"1. Cinturon"<<endl;
		cout<<"2. Camisa"<<endl;
		cout<<"3. Zapatos"<<endl;
		cout<<"4. Corbata"<<endl;
		cin>>opc2;
		
		switch(opc2){
			
			case 1:
				vlrunt=(vlrtotal/5);
				break;
				
				
			case 2:
				vlrunt=(vlrtotal/6)*2;
				break;
					
			case 3:
				vlrunt=(vlrtotal/2);
				break;
				
			case 4:
				vlrunt=(vlrtotal/6);
				break;		
				
			
		}
		
		prcfnl=prcfnl+vlrunt;
	 	
	 	cout<<"Desea añadir otra prenda"<<endl;
	 	cout<<"1. Si"<<endl<<"2. No"<<endl;
	 	cin>>opc3;

	 }while(opc3==1);
	 
	 cout<<"El valor total de su traje es de: "<<prcfnl<<endl;
	
	return 0;
	}

