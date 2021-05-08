// even getallen 0-20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	system("color 4F");
	bool running = true;
	while (running)
	{
		char keuze;
		int a, bereik;
		cout << endl;
		cout << "********************************************************************************" << endl;
		cout << " Welkom op de rekenmachine programma geschreven door SitalKishan van klas 2.10.1 " << endl;
		cout << "********************************************************************************" << endl;
		cout << endl;
		cout << " De tafel van ";
		cin >> a;
		cout << endl;
        cout << " Aantal vermenigvuldigingen tot en met ";
		cin >> bereik;
        cout << "***************************************************************" << endl;
	    cout << endl;

		for (int b = 0; b <= bereik; ++b)
		{
			
			cout << b << " X " << a << " = " << b * a << endl;
		}

		bool loop = true;
		while (loop)
		{
			cout << "***************************************************************" << endl;
            cout << endl;
			std::cout << " Voer Y in om voort te zetten" << std::endl;
			cout << endl;
			std::cout << " Voer N in om de rekenprogramma te sluiten" << std::endl;
			cout << endl;
			std::cout << " Maak uw keuze: "; std::cin >> keuze;

			if (keuze == 'Y')
				loop = false;
			else if (keuze == 'N')
				running = false, loop = false;
			else
				std::cout << endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << " Gebruik een van de bovenstaande gegeven letters" << std::endl << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
				

		}
	}
	cin.ignore();
	return 0;
}