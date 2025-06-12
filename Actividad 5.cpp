#include<iostream> //se solicita la libreria
using namespace std; //espacio de nombre para las funciones
int main() //inicio de la funcion primaria
{
	cout<<"****************************************************"<<endl;
	cout<<endl;
	cout<<"Actividad 5 de estrucutras repetitivas/condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"****************************************************"<<endl;
	cout<<endl<<endl;
	
	//variables
	int contador;
	int i = 0;
	int numero;
	int par = 0;
	int impar = 0;
	
	cout<<"Por favor indique cuantos numeros quiere ingresar: "; //mensaje pidiendo al usuario cuantos numeros va a ingresar luego
	cin>>contador;
	
	while(i < contador) //inicio de la estructura repetitiva
	{
		cout<<"Ingrese sus numeros."<<endl; //se le pide al usuario que ingrese sus numeros
		cin>>numero;
		i++;	//incremental para darle un limite a la estructura repetitiva
		
		if(numero % 2 == 0) //condicional para verificar si los valores ingresados son pares o impares
	{
		par++;
	}
	else
	{
		impar++;
	}
}
	cout<<endl<<endl;
	cout<<"Numeros pares: "<<par; //mensajes mostrando cuantos numeros pares e impares hay.
	cout<<endl;
	cout<<"Numeros impares: "<<impar;
}

