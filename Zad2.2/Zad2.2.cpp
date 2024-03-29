// Zad2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> 
#include "windows.h" 
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
	int rozmiar;
	cout << "Aby wykonac wszystkie operacje, rozmiary macierzy musza byc rowne " << endl;
	cout << "podaj rozmiary macierzy ";
	cin >> rozmiar;
	if (!cin)
	{ 

		cin.clear(); 
		cin.sync(); 
		cout << "podana zmienna nie jest liczba" << endl;
	}
	else
	{ 
		double **tab1 = new double *[rozmiar];
		double **tab2 = new double *[rozmiar];
		double **dodane = new double *[rozmiar];
		double **odjente = new double *[rozmiar];
		double **wymnozone = new double *[rozmiar];
		srand(time(NULL));
		for (int i = 0; i < rozmiar; ++i)
		{
			tab1[i] = new double[rozmiar];
			for (int j = 0; j < rozmiar; ++j)
			{
				tab1[i][j] = rand() % 21 - 10;
			}
		}
		for (int i = 0; i < rozmiar; ++i)
		{
			tab2[i] = new double[rozmiar];
			for (int j = 0; j < rozmiar; ++j)
			{
				tab2[i][j] = rand() % 21 - 10;
			}
		}

		cout << "Pierwsza Macierz: " << endl;
		for (int i = 0; i < rozmiar; ++i, cout << endl)
		{
			for (int j = 0; j < rozmiar; ++j)
			{
				cout << tab1[i][j] << '\t';
			}
		}
		cout << "Druga Macierz: " << endl;
		for (int i = 0; i < rozmiar; ++i, cout << endl)
		{
			for (int j = 0; j < rozmiar; ++j)
			{
				cout << tab2[i][j] << '\t';
			}
		}
		cout << "Dodawanie Macierzy: " << endl;
		for (int i = 0; i < rozmiar; ++i)
		{
			dodane[i] = new double[rozmiar];
			for (int j = 0; j < rozmiar; ++j)
			{
				dodane[i][j] = tab1[i][j] + tab2[i][j];
			}
		}
		for (int i = 0; i < rozmiar; ++i, cout << endl)
		{
			for (int j = 0; j < rozmiar; ++j)
			{
				cout << dodane[i][j] << '\t';
			}
		}
		cout << "Odejmowanie Macierzy: " << endl;
		for (int i = 0; i < rozmiar; ++i)
		{
			odjente[i] = new double[rozmiar];
			for (int j = 0; j < rozmiar; ++j)
			{
				odjente[i][j] = tab1[i][j] - tab2[i][j];
			}
		}
		for (int i = 0; i < rozmiar; ++i, cout << endl)
		{
			for (int j = 0; j < rozmiar; ++j)
			{
				cout << odjente[i][j] << '\t';
			}
		}
		cout << "Mnozenie Macierzy: " << endl;
		for (int i = 0; i < rozmiar; ++i)
		{
			wymnozone[i] = new double[rozmiar];
			for (int j = 0; j < rozmiar; ++j)
			{
				int s = 0;
				for (int k = 0; k < rozmiar; ++k)
				{
					s += tab1[i][k] * tab2[k][j];
				}
				wymnozone[i][j] = s;
			}
		}
		for (int i = 0; i < rozmiar; ++i, cout << endl)
		{
			for (int j = 0; j < rozmiar; ++j)
			{
				cout << wymnozone[i][j] << '\t';
			}
		}
	}

	system("pause");


	return 0;
}
