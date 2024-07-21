#include "funciones.h"
#include <iostream>
#include <windows.h>
#include <locale.h> //libreria para incluir el idioma espa?ol
#define color SetConsoleTextAttribute
using namespace std;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
// Funci?n para obtener el ancho de la consola
int anchoConsola() {
    CONSOLE_SCREEN_BUFFER_INFO csbi; //declara variable de tipo CONSOLE_SCREEN_BUFFER_INFO (es una estructura definida en la libreria windows.h)
    // esta contiene info sobre el bufer de la pantalla de consola, como las dimensiones (lo que necesitamos)
    int columnas; //declara una variable "columnas" de tipo int

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi); //con "GetStdHandle(STD_OUTPUT_HANDLE)" obtenemos un identificador para el bufer
    //de
    // Esta funci?n obtiene informaci?n detallada sobre el b?fer de pantalla de la consola y la guarda en la estructura csbi.
    columnas = csbi.srWindow.Right - csbi.srWindow.Left + 1; //csbi.srWindow.Right y csbi.srWindow.Left: Estas son propiedades de la estructura CONSOLE_SCREEN_BUFFER_INFO. 
	// srWindow es una estructura dentro de csbi que representa la ventana de visualizaci?n actual de la consola.
	// csbi.srWindow.Right representa la coordenada m?s a la derecha de la ventana de la consola.
	// csbi.srWindow.Left representa la coordenada m?s a la izquierda de la ventana de la consola.
	
	//ej
	
	// si la consola mide 100 caracteres, para que la pc lo sepa, entonces:
	// csbi.srWindow.Right = 99
	// csbi.srWindow.Left = 0
	// 	columnas = 99 +1 = 100, 
    return columnas;
}

void imprimirEspacio(int n){
	for(int i=0; i<n; i++){
		cout << " ";
	}
}

void centrar(const string& text) {
    int tamanoconsola = anchoConsola(); // ya que hallamos columnas con la funcion, le asignamos una variable al retorno
    int tamanotexto = text.length(); //"text.lenght()" halla el tama?o del texto en caracteres. le asignamos una variable de tipo int a la anchura del texto
    int espaciado = (tamanoconsola - tamanotexto) / 2; // la diferencia de ambos entre 2 es la distancia para centrar un texto
    // Imprimir espacios en blanco antes del texto
    imprimirEspacio(espaciado);
    // Imprimir el texto
    cout << text;
    
    imprimirEspacio(espaciado);
    
}
