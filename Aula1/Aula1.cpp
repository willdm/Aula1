// Aula1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida
#include <string>	//cadeia

using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");  //UTF-8 pt-br
									  //escreva ("Ola Mundoo)
	cout << "Olá Mundo! \n\n";
	cout << "Escreva um numero interio:" << endl;
	int qualquercoisa;
	cin >> qualquercoisa;
	cout << " O numero digitado é: " << qualquercoisa << endl;

	//Faça um programa que solicite um nome e uma idade ao usuário e em seguida demonstre os valores na saída do console.
	//Para representar caracteres especiais utilize o comando : setlocale(LC_ALL, "Portuguese");
	string name;
	int age;
	cout << "Digite seu nome e idade: " << endl;
	cin >> name >> age;

	//Crie um programa que solicite ao usuário o preço individual de três produtos e em sequência demonstre o valor total destes itens.
	double p1, p2, p3;
	cout << "Digite em ordem os valores para estas frutas: Maça, laranja, limão. " << endl;
	cin >> p1 >> p2 >> p3;
	cout << "Maçã custa:" << p1 << endl << "laranja custa:" << p2 << endl << "limão custa:" << p3 << endl;

	return 0;
}