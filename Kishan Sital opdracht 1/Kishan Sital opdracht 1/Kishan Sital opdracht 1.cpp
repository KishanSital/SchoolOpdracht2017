// Kishan Sital opdracht 1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color 6F");
	cout << endl;
	cout << "###############################################################################";
	cout << endl;
	cout << " Welkom op de rekenmachine programma geschreven door SitalKishan van klas 2.10.1 ";
	cout << endl;
	cout << "###############################################################################" << endl;
	cout << endl;

	float r;
	float pi = 3.142;
	float Oppervlakte;
	float Inhoud;
	for (r = 1; r <= 1000; r++)

	{
		cout << " Kies a.u.b voor de straal een getal tussen 0 en 1000 (=>1000 om te sluiten): ";
		cin >> r;
		cout << endl;
		Oppervlakte = (4)*(pi)*(r*r);
		Inhoud = (1.3333)*(pi)*(r*r*r);
		cout << " Oppervlakte van de bol is: " << Oppervlakte << "\t";
		cout << " Inhoud van de bol is: " << Inhoud << "\n" << "\n";
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << " Wilt u door gaan dan kiest u een getal tussen 0 en 1000 voor de straal" << endl;
		cout << " Wilt u stoppen dan kiest u een getal groter of gelijk aan 1000 voor de straal" << endl;
		cout << " Bijvoorbeeld (1000, 1001,...... )" << endl;
		cout << "--------------------------------------------------------------------------------" << endl;

	}


	
	return 0;
}






