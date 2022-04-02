#include <iostream>
using namespace std;

int main(){
	
	int i,otro;
	double ttla,ttlb,ttlc,ttle,ttlfnl,a,b,c,d,e;
	i=1;
	ttlfnl=0;

	
	do{
		
		do{
		
			cout<<"Ingrese el valor de la "<<i<<" camisa: ";
			cin>>a;
			
			ttla=ttla+a;
			i++;
			
		}while(i<=4);
		
		ttlfnl=ttlfnl+ttla; 
		
		i=1;
		do{
			
			cout<<"Ingrese el valor del "<<i<<" pantalon: ";
			cin>>b;
			
			ttlb=ttlb+b;
			i++;

		}while(i<=3);
		
		ttlfnl=ttlfnl+ttlb;
		
		i=1;
		do{
			
			cout<<"Ingrese el valor del "<<i<<" zapato: ";
			cin>>c;
			
			ttlc=ttlc+c;
			i++;

		}while(i<=2);
		
		ttlfnl=ttlfnl+ttlc;
		
		cout<<"Ingrese el valor de la chaqueta: ";
		cin>>d;
		ttlfnl=ttlfnl+d;
		i=1;
		do{
			
			cout<<"Tenga en cuenta: "<<endl<<"Libro 1 es el libro de Programacion."<<endl<<"Libro 2 es el libro de Innovacion."<<endl<<"Libro 3 es el libro de Emprendimiento"<<endl;
			cout<<"Libro 4 es el libro de Logica de programacion."<<endl;
	
			cout<<"Ingrese el valor del libro "<<i<<": ";
			cin>>e;
			
			ttle=ttle+e;
			i++;

		}while(i<=4);
		
			ttlfnl=ttlfnl+ttle;
			
		cout<<endl<<"El valor total invertido en su atuendo es: "<<ttlfnl<<endl;
		
		cout<<"Desea ejecutar nuevamente el programa"<<endl;
		cout<<"1. Si"<<endl<<"2.No"<<endl;
		cout<<"Su opcion: ";
		cin>>otro;
			
	}while(otro==1);



return 0;
}
