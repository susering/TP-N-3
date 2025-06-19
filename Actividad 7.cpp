#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 7 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	int par = 0;
	int impar = 0;
	int sumatoria;
	
	for(int i=1; i<= 300 ; i++) //inicio 
	{
		cout<<i<<endl<<endl;
		
		if(i % 2 > 0) //condicional que comprueba si el numero es par
		{
			sumatoria = sumatoria + i; //agregando un nuevo valor en caso que el numero sea par
		}
		else //resultado en caso que el numero no sea par
		{
			sumatoria = sumatoria; //dejando que la variable se quede en el mismo valor si no es impar
		}
	}
	cout<<"El resultado de la sumatoria de los numeros impares es: "<<sumatoria; //mensaje mostrando el resultado de la sumatoria
	
	return 0;
}

