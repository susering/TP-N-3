#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 3 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	float numero;
	float cantidaDivisiones = 0;
	
	
	cout<<"Por favor ingrese un numero: "; //mensaje pidiendo al usuario que ingrese un numero
	cin>>numero; //ingresion del numero

	while(numero>=0.01) //inicio del ciclo
	{
		numero = numero / 2; 
		cantidaDivisiones = cantidaDivisiones + 1;
	}
	
	cout<<"El numero mas pequeño a 0.01 es: "<<numero<<endl;  //mensaje mostrando el numero resultado
	cout<<"El numero se dividio "<<cantidaDivisiones<<" vez o veces"; // mensaje mostrando el numero de divisiones realizadas
	
return 0;
}
