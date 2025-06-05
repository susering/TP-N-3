#include <iostream> //libreria
using namespace std; //espacio de nombre
int main() //inicio de funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 2 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<endl;

	//variables
	int i = 1;
	float suma;
	int numero;
	int valorMaximo = 0;
	int valorMinimo = 1000000000;
	float promedio;
	
	cout<<"Ingrese los 10 valores"<<endl; //mensaje pidiendo la ingresion de 10 valores
	
	while(i<=10) //inicio del ciclo
	{
		cin>>numero;
		
		i = i + 1;
		
		suma = suma + numero;
		
		if(valorMaximo<numero)
		{
			valorMaximo=numero;
		}
		else if(valorMinimo>numero)
		{
			valorMinimo=numero;
		}
	}

	promedio = suma / 10; //asignación de valor a la variable
	
	cout<<endl<<endl;
	cout<<"La suma entre los diez numeros es de: "<<suma<<endl; //impresión de mensajes sobre resultados
	cout<<"El valor maximo es de: "<<valorMaximo<<endl;
	cout<<"El valor minimo es de: "<<valorMinimo<<endl;
	cout<<"El promedio de los 10 numeros es: "<<promedio;
	return 0;
}

