// PROJECTHELLOWORLD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main2(void)

{
	cout<<"Test dzia³ania VS.\nPies Cie jebal\a";

	return 0;

}

int main3(void)

{
	cout << "To ja Twoj komputer";

	return 0;
}

int main4(void)

{
	cout << "Czy\n";
	cout << 3 + 4;
	cout << "\njest wieksze od\n";
	cout << "siedem";
	return 0;
}

int main5(void)

{
	cout << "Czy\n" << 3 + 4 << "\njest wieksze od\n" << "siedem";
	return 0;
}

int main6()

{
	int to_jest_zmienna;
	unsigned int tylkoDodatnie;

	float zmiennoprzecinkowa;

	char jeden_znak;
	unsigned char rowniez_znak;

	int abc = -53;

	tylkoDodatnie = 22;
	zmiennoprzecinkowa = 12.42;
	rowniez_znak = 'c';
	to_jest_zmienna = 235252;
	jeden_znak = 23;
	
	cout << "Wypisujemy zmienne:\n";
	cout << "\nto_jest_zmienna = " << to_jest_zmienna ;
	cout << "\ntylkoDodatnie = " << tylkoDodatnie ;
	cout << "\nabc = " << abc;
	cout << "\nzmiennoprzecinkowa = " << zmiennoprzecinkowa ;
	cout << "\njeden_znak = " << jeden_znak ;
	cout << "\nrowniez_znak = " << rowniez_znak ;

	return 0;
}

int main()

{
	int nieznana;

	nieznana = 123;

	cout << "Liczba = " << nieznana;
	return 0;
}