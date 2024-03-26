// FungsiSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData()
{
	cout << "Masukkan bilangan pertama : ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua : ";
	cin >> bilangan2;
}

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

int main()
{
	int pilihan;
	
	do
	{
		cout << "Kalkulator Sederhana" << endl;
		cout << "=====================" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "=====================" << endl;
		cout << "Masukkan menu pilihan : ";
		cin >> pilihan;

		switch (pilihan) 
		{
			case 1: 
				inputData();
				cout << "Hasil penjumlahan = " << penjumlahan(bilangan1, bilangan2) << endl;
				break;
		}
	}
}