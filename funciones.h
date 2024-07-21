#ifndef FUNCIONES_H
#define FUNCIONES_H
#include "estructuras.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <locale.h> //libreria para incluir el idioma espa?ol
#define color SetConsoleTextAttribute
using namespace std;

int anchoConsola();
void imprimirEspacio(int n);
void centrar(const string& text);
void centrarCin(int tamanotexto);
void separador(char c);
void enjaular(string text, char c);
void subrayar(string text, char c);
void linea(int n, char s, int salto);
void contenidoJaula(string text, int n, char s, int salto);
void eliminarComida(PlatosDeComida arr[], int &n, int indice);
void enlinear(string texto, char s);


#endif
