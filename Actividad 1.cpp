#include <iostream>
using namespace std;
int main()
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 1 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<endl;

	//variables
	int aprobados = 0;
	int desaprobados = 0;
	float nota;
	int i;

	cout<<"Ingrese sus 10 notas."<<endl; //mensaje en pantalla pidiendo al usuario que ingrese 10 valores
	
	for(i=1; i<=10; i++) //inicio de la secuencia "for"
	{
		cin>>nota; //se ingresan los valores
		if(nota>=7) //1er caso del if
		{
			aprobados=aprobados + 1;
		}
		else //2do caso del if
		{
			desaprobados=desaprobados + 1;
		}
	}
	
	cout<<"Aprobados: "<<aprobados<<endl; //mensajes mostrando cuantos aprobados y desaprobados hay
	cout<<"Desaprobados: "<<desaprobados;
	
	return 0;
}
