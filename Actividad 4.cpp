#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 4 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	int terminos = 0;
	int numero = 11;
	
	while(terminos < 25) //inicio del ciclo
	{
		cout<<numero<<endl;
		cout<<endl;
		terminos++; //incremental para darle un limite a la cantidad de veces que se ejecute el "while"
		numero = numero + 11;	
	}
	return 0;
} 


