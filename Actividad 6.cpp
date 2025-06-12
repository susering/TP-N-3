#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 6 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	int sumatoria;
	
	for(int i=1 ; i<=100 ; i++ ) //inicio de la estructura repetitiva/condicional
	{
		if (i % 2 == 0) //condicional que comprueba si los numeros son pares o impares
		{
			sumatoria = sumatoria + i; //incremental para cuando los valores son pares
			cout<<i; //mensaje mostrando los numeros pares
		}
		else //en caso de que no se cumpla la condicional
		{
			sumatoria = sumatoria;
		}
		
		cout<<endl;
		
	}
	cout<<endl;
	cout<<"La sumatoria de todos los numeros pares da: "<<sumatoria; //mensaje indicando el resultado de la sumatoria de todos los numeros pares
return 0; //fin del programa	
}
