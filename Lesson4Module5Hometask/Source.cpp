#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define size 20
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task, length = size;

	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*Дано целое число в двоичной системе счисления, т.е.последовательность цифр
					0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.*/
				int eight[8] = { 0, 1, 10, 11, 100, 101, 110, 111 }, a, b, count = 0, i = 0, x, y;
				int m[20];
				cout << "Введите число А - ";
				cin >> a;
				b = a;
				while (a > 0)
				{
					if (a % 2 == 0)
					{
						m[i] = 0;
						a /= 2;
						count++;
					}
					else
					{
						m[i] = 1;
						a /= 2;
						count++;
					}
					i++;
				} 
				cout << "В двочной системе число " << b << " = ";
				for (int i = count - 1 ; i >=0; i--)
				{
					cout << m[i];
				}
				cout << "\nПереводим в 8 - " << endl;


			} break;

			case 2:
			{
				/*Ввести два массива действительных чисел, состоящих из 7 и  9 элементов.
					Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/
				int m1[7], m2[9], m3[16];
				for (int i = 0; i < 7; i++)
				{
					m1[i] = -50 + rand() % 100;
				}
				for (int i = 0; i < 9; i++)
				{
					m2[i] = -50 + rand() % 100;
					cout << "Index " << i << " == " << m2[i] << endl;
					if (i < 7)
						cout << "Index " << i << " == " << m1[i] << endl;
				}
			} break;

			case 3:
			{
				/*Ввести массив, в котором только два одинаковых элемента.Определить их местоположение.*/
				int m[size], a, b, count = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -50 + rand() % 100;
					cout << "Index " << i << " == " << m[i] << endl;
				}
				for (int i = 0; i < length; i++)
				{
					for (int j = i + 1; j < length; j++)
					{
						if (m[i] == m[j])
							cout << i << " iii " << j << endl;
					}
				}
				

			} break;

			case 4:
			{
				/*Задан целочисленный массив.Определить, образуют ли значения его элементов 
					геометрическую прогрессию.Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют».*/
				int m[size], q = 3;
				for (int i = 0; i < length; i++)
				{
					m[i] = 1 + rand() % 99;
					cout << "Index " << i << " == " << m[i] << endl;
				}
				for (int i = 1; i < length; i++)
				{
					if (m[i] == m[0] * pow(q, i - 1))
						cout << "Образует геометр прогр" << endl;
					else
						cout << "Не образует геометр прогр" << endl;
				}
			} break;

			case 5:
			{
				/*9.	Отсортировать по возрастанию элементов последней строки целочисленный двухмерный массив 3×4.*/

			} break;
		} 
	} while (task < 11);
}
