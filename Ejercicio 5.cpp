int main()
{
	
int a,b,c,opr,i;
i=1;

 cout<<"ingrese el numero 1: ";
 cin>>a;
 cout<<"ingrese el numero 2: ";
 cin>>b;
 cout<<"ingrese el numero 3: ";
 cin>>c;
 
 do{
 	a=a+b;
 	b=b+b+b;
 	opr=a+b+(c/2);
 	cout<<"Operacion "<<(i++)<<": "<<opr<<endl;
 	
 }while(i<=10);
	
	
    return 0;
}
