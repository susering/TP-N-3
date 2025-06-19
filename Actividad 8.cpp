#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 8 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	int numero;
	int resultado;
		
	cout<<"Por favor ingrese su numero: "; //mensaje pidiendo al usuario que ingrese un valor
	cin>>numero;	//ingresión del valor
	
	resultado = numero; //dandole un nuevo valor a la variables
	
	
	for(int i=1 ; i<5 ; i++) //inicio de la estructura repetitiva
	{
		resultado = resultado * numero; //contenido de la estructura repetitiva
	}										

	cout<<"El numero elegido potenciado a la quinta potencia da: "<<resultado; //mensaje mostrando el resultado
	
	return 0; //fin del programa
}
