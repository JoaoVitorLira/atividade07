#include <iostream>
#include <locale>
using namespace std;

//1 – Faça um programa que leia o número de um funcionário, seu
//número de horas trabalhadas, o valor que recebe por hora e calcule o
//salário desse funcionário.A seguir, mostre o número e o salário do
//funcionário.

int salario(int a, int b) {
	return a * b;
}

int main()
{
	int funcionarios, horas, valorPorHora;
	cout << "Qual o seu numero de funcionário: ";
	cin >> funcionarios;
	cout << "Digite horas trabalhadas: ";
	cin >> horas;
	cout << "Digite o valor recebido por hora: ";
	cin >> valorPorHora;

	int resultado = salario(horas, valorPorHora);
	cout << "O funcionario " << funcionarios << " recebe R$" << resultado;
}

//2 – Fazer um programa para ler, a quantidade e o valor unitário de
//dois produtos e mostre quanto no final a pessoa deve pagar 