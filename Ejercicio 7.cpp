#include <iostream>

using namespace std;

int main()
{
    int ang,tang,i,cant;
    i=1;
    
    cout<<"	Ingrese la cantidad de triangulos de los cuales desea conocer el tercer angulo: ";
    cin>>cant;
    
    do{
		cout<<"Ingrese el angulo: "<<"\n";
		cin>>ang;
		 
		ang=ang+90;
		tang=180-ang;
		
		cout<<"El tercer angulo del "<<i<<" triangulo es: "<<tang<<endl;
		i++;
		
	}while(i<=cant);

    return 0;
}

