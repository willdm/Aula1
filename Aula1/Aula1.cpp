// Aula1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida
#include <string>	//cadeia

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");  //UTF-8 pt-br
	#pragma region Exc 0 
	cout << "Olá Mundo! \n\n"<< endl;
	#pragma endregion
	
	#pragma region Exc 1
	cout << "Escreva um numero interio:" << endl;
	int qualquercoisa;
	cin >> qualquercoisa;
	cout << " O numero digitado é: " << qualquercoisa << endl;
	#pragma endregion

	#pragma region Exc 2 
	//Faça um programa que solicite um nome e uma idade ao usuário e em seguida demonstre os valores na saída do console.
	//Para representar caracteres especiais utilize o comando : setlocale(LC_ALL, "Portuguese");
	string name;
	int age;
	cout << "Digite seu nome e idade: " << endl;
	cin >> name >> age ;
	#pragma endregion

	#pragma region Exc 3 
	//Crie um programa que solicite ao usuário o preço individual de três produtos e em sequência demonstre o valor total destes itens.
	double p1, p2, p3;
	cout << "Digite em ordem os valores para estas frutas: Maça, laranja, limão. " << endl;
	cin >> p1 >> p2 >> p3;
	cout << "Maçã custa:" << p1 << endl << "laranja custa:" << p2 << endl << "limão custa:" << p3 << endl;
	#pragma endregion

	#pragma region Exc 4
	//Faça um programa que solicita ao usuário o raio de um círculo e em seguida calcule o seu perímetro e sua área;
	double pi = 3.14, r, a;
	cout << "Digite o Valor de um Raio de um circulo:" << endl;
	cin >> r;
	a = pi * (r = r + r);
	cout << "O tamanho do perimetro é :" << r << endl;
	cout << "O Tamanho da area é : " << a << endl;

	#pragma endregion

	#pragma region Exc 5
	//Faça um programa que solicita ao usuarios 3 notas para um usuario e demonstre média dos valores ao final
	double n1, n2, n3, m;
	cout << "Digite tre notas;  " << endl;
	cin >> n1 >> n2 >> n3;
	m = (n1 + n2 + n3) / 3;
	cout << "A media dos valores é:  " << m << endl;
	#pragma endregion

	#pragma region Exc 6
	//Faça um programa que solicita ao usuario tres notas que devem ser tratadas respectivamente com pesos 2.4 e 4.
	//No final, calcule a Média ponderada e uniforme ao usuario:
	//double n1, n2, n3 >> m;
	cout << "Digite três notas;  " << endl;
	cin >> n1 >> n2 >> n3;
	n1 = n1 * 2;
	n2 = n2 * 4;
	n3 = n3 * 4;
	m = (n1 + n2 + n3) / 10;
	cout << "A media dos valores é:  " << m << endl;
	#pragma endregion

	#pragma region Exc 7
	//Solicite ao usuario o valor de um salario e pergunte qual sera o aumento de seus ganho neste ano.
	//Em seguida demonstre o salario atual e o novo salario apos o aumento.
	double salario_atual, salario_novo, ganho;
	cout << "Escreva o valor de um salario: " << endl;
	cin >> salario_atual;
	cout << "Escreva qual sera o aumento de seus ganho neste ano: " << endl;
	cin >> ganho;
	salario_novo = (ganho / 12) + salario_atual;
	cout << "Seu Salario Atual: " << salario_atual << endl << "Seu novo salario sera: " << salario_novo <<endl;

	#pragma endregion

	return 0;
}