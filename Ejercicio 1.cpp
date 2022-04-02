#include <iostream>

using namespace std;

int main()
{	
	int empl,sldbs,hestra,bnfcn,pstcns,cnt,sld,opc,total;
	cnt=1;
	sldbs=855000;
	pstcns=(sldbs-((sldbs/100)*74));
	
	do{
		pstcns=(sldbs-((sldbs/100)*74));
		sldbs=855000;
		cout<<"Seleccione el numero de horas extras: "<<"\n";
		cout<<"1. 10 horas extras"<<"\n";
		cout<<"1. 20 horas extras"<<"\n";
		cout<<"1. 32 horas extras"<<"\n";
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc){
			
			case 1:
				sld=sldbs+((sldbs/100)*10);
				sld=(sld-pstcns);
				total=total+sld;
				cout<<"El sueldo a pagar al empleado es de: "<<sld<<endl;
				break;
				
			case 2:
				sld=sldbs+((sldbs/100)*15);
				sld=(sld-pstcns);
				total=total+sld;
				cout<<"El sueldo a pagar al empleado es de: "<<sld<<endl;
				break;
				
			case 3:
				sld=sldbs+((sldbs/100)*20);
				sld=(sld-pstcns);
				total=total+sld;
				cout<<"El sueldo a pagar al empleado es de: "<<sld<<endl;
				break;
				
			default:
				cout<<"La opcion ingresada es incorrecta"<<endl<<endl;
				break;
				
		}
		cnt++;
	}while(cnt<=10);
	
	cout<<"El total a pagar por la nomina de los 10 empleados es de: "<<total<<endl;
    return 0;
}
