#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define size 10
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
					cout << m1[i] << "\t";
					if (i == 6)
						cout << "\n";
				}
				cout << "\n==========" << endl;
				for (int i = 0; i < 9; i++)
				{
					m2[i] = -50 + rand() % 100;
					cout << m2[i] << "\t";
					if (i == 8)
						cout << "\n";
				}
				for (int i = 0; i < 7; i++)
				{
					m3[i] = m1[i];
				} 
				for (int i = 0; i < 9; i++)
				{
					m3[i + 7] = m2[i];
				}
				cout << "\n3333333333" << endl;
				for (int i = 0; i < 16; i++)
				{
					cout << m3[i] << "  ";
				}
				cout << endl;
				cout << "Сортировка" << endl;
				for (int i = 0; i < 16; i++)
				{
					for (int j = 16 - 1; j >= 0; j--)
					{
						if (m3[j - 1] < m3[j])
						{
							int tempo = m3[j];
							m3[j] = m3[j - 1];
							m3[j - 1] = tempo;
						}
					}
				}
				for (int i = 0; i < 16; i++)
				{
					cout << m3[i] << "  ";
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
				/*5.	Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4*/

			} break;

			case 6:
			{
				/*6.	В матрице А(3 - строки, 4 - столбца) поменять местами наименьшие элементы в первой и третей строке.*/
				int m[3][4], min1, min2;
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						m[i][j] = -50 + rand() % 100;
						cout << m[i][j] << "\t";
						if (j == 4 - 1)
							cout << "\n";
					}
				}
				for (int i = 0; i < 3; i++)
				{	
					if (i == 0)
						min1 = m[i][0];
					if (i == 3)
						min2 = m[i][0];
					for (int j = 0; j < 4; j++)
					{
						if(i == 1)
							if (m[i][j] < min1)
								min1 = m[i][j];
						if (i == 3)
							if (m[i][j] < min2)
								min2 = m[i][j];
					}
				}
				cout << "\n=======" << endl;
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if(i == 1)
							if (m[i][j] == min1)
								m[i][j] = min2;
						if (i == 3)
							if (m[i][j] == min2)
								m[i][j] = min1;
						cout << m[i][j] << "\t";
						if (j == 4 - 1)
							cout << "\n";
					}
				}

			} break;

			case 7:
			{
				/*Дан двухмерный массив 5×6.
					Определить среднее арифметическое каждого столбца, 
					определить максимум и минимум каждой строки.*/
				int m[5][6], min, max, sum = 0;
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						m[i][j] = -50 + rand() % 100;
						cout << m[i][j] << "\t";
						if (j == 6 - 1)
							cout << "\n";
					}
				}
				cout << "\n=======" << endl;
				for (int i = 0; i < 5; i++)
				{
					max = 0;
					min = 0;
					for (int j = 0; j < 6; j++)
					{
						if (m[i][j] < min)
							min = m[i][j];
						if (m[i][j] > max)
							max = m[i][j];
						if (j == 5)
						{
							cout << "Max значение в строке " << i << " --- " << max << endl;
							cout << "Min значение в строке " << i << " --- " << min << endl;
						}
					}
				}
				cout << "\n=======" << endl;
				for (int j = 0; j < 6; j++)
				{
					sum = 0;
					for (int i = 0; i < 5; i++)
					{
						sum += m[i][j];
						if (i == 4)
						{
							cout << "Ср. арифм. столбца № " << j << " == " << sum / 5 << endl;
						}
					}
				}
			} break;

			case 8:
			{
				/*Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.*/
				int m[size][size], count1 = 0, count2 = 0;
				for (int i = 0; i < length; i++)
				{
					for (int j = 0; j < length; j++)
					{
						m[i][j] = -50 + rand() % 100;
						if (m[i][j] % 2 != 0)
							count1++;
						if (m[i][j] % 2 == 0)
							count2++;
						cout << m[i][j] << "\t";
						if (j == length - 1)
							cout << "\n";
					}
				}
				cout << "Кол-во нечетных чисел - " << count1 << endl;
				cout << "Кол-во четных чисел - " << count2 << endl;

			} break;

			case 9:
			{
				/*Дан двухмерный массив n ×m элементов.Определить, сколько раз встречается число 7 среди элементов массива.*/
				int m[size][size], count = 0;
				for (int i = 0; i < length; i++)
				{
					for (int j = 0; j < length; j++)
					{
						m[i][j] = -50 + rand() % 100;
						if (m[i][j] == 7)
							count++;
						cout << m[i][j] << "\t";
						if (j == length - 1)
							cout << "\n";
					}
				} 
				cout << "Число 7 встречается " << count << " раз." << endl;
			} break;
			
			case 10:
			{
				/*10.	Дан массив из n × m элементов.Найти индексы первого наименьшего  элемента массива*/
				int m[size][size], min = 0, a, b;
				for (int i = 0; i < length; i++)
				{
					for (int j = 0; j < length; j++)
					{
						m[i][j] = -100 + rand() % 200;
						cout << m[i][j] << "\t";
						if (j == length - 1)
							cout << "\n";
					}
				} for (int i = 0; i < length; i++)
				{
					cout << i << "\t";
				}
				cout << endl;
				for (int i = 0; i < length; i++)
				{	
					min = 0;
					for (int j = 0; j < length; j++)
					{
						if (m[i][j] < min)
						{
							min = m[i][j];
							a = i;
							b = j;
						}
							
						if (j == length - 1)
							cout << "Index min числа " << a << " && " << b << "\nРавно " << min << endl;
					}
				}
			} break;
		} 
	} while (task < 11);
}
