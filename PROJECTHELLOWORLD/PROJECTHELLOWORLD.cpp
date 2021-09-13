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

int main7()

{
	int nieznana;

	nieznana = 123;

	cout << "Liczba = " << nieznana;
	return 0;
}

// dyrektywa preprocesora include? u nas iostream, w poradniku cstdio, jakie jeszcze s¹ biblioteki, czym siê rózni¹ i jakich u¿ywamy? :D
// int main() w nawiasach musimy coœ wpisywaæ czy moze zostac wolne? void...
// int main12345... jak ustawiæ kolejnoœæ wykonanywanie poszczególnych zadan? £adnie to pokaza³es na pierwszej lekcji :D
// printf cos mi nie dzia³a
// w 60 wierszu przypisa³em wartoœc do jeden znak = 23 a wyskakuje jakies chujostwo
// \n czasami nie moge wstawic na koncu wiersza, daje na poczatku nowego, ale podejrzewam, ¿e mo¿na wrzuciæ na koniec tylko nie wiem jak


int main8()

{
	int a;
	float b;
	cout << "Podaj liczbe calkowita:\n";
	cin >> a;
	cout << "\nPodaj liczbe rzeczywista:\n";
	cin >> b;
	cout << "\nLiczba a = " << a;
	cout << "\nLiczba b = " << b;
	return 0;

}

int main9()

{
	int a;
	float b;
	cout << "Podaj liczbe calkowita:\n";
	cin >> a;
	cout << "Czy cos nawalilo?" << cin.fail();
	cout << "\nPodaj liczbe rzeczywista:\n";
	cin >> b;
	cout << "Czy cos nawalilo?" << cin.fail();
	cout << "\nLiczba a = " << a;
	cout << "\nLiczba b = " << b;
	return 0;
}
// czy ot tak mozna zmieniac include?
// kiedy siê konczy include np. iostream ? czy jest jakas komenda konczaca czy jesli raz okreslimy ze bedziemy korzystac z tej biblioteki to ona zostaje?


int main10()
{
	
	cout << "Obliczam: 3+2*4=" << 3 + 2 * 4 << '\n';
	cout << "Obliczam: 10*2+1=" << 10 * 2 + 1 << '\n';
	return 0;

}

int main11()

{
	cout << "Podaj liczbe" << '\n';
	int X;
	cin >> X;
	cout << "Obliczam: 3+X*4=" << 3 + X * 4 << '\n';
	cout << "Obliczam: (3+X)*4=" << (3 + X) * 4 << '\n';
	return 0;

}

int main12()

{

	cout << "Podaj liczbe" << '\n';
	int Zmienna;
	cin >> Zmienna;
	int Wynik1 = 3 + Zmienna * 4;
	int Wynik2 = (3 + Zmienna) * 4;
	cout << "Wynik pierwszy = " << Wynik1 << '\n';
	cout << "Wynik drugi = " << Wynik2 << '\n';
	return 0;

}

int main13(void)

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;

	int b;
	cout << "Podaj b" << '\n';
	cin >> b;

	cout << "a % b = " << a % b << '\n';
	return 0;


}


int main14()

{
	double liczba = 123.3;
	cout << "liczba = " << liczba << '\n';

	liczba = liczba + 6.7;
	cout << "liczba = " << liczba << '\n';

	liczba -= 30;
	cout << "liczba = " << liczba << '\n';

	liczba /= 11; 
	cout << "liczba = " << liczba << '\n';

	liczba *= 3;
	cout << "liczba = " << liczba << '\n';

	int nowa = liczba;

	nowa %= 8;
	cout << "nowa =" << nowa << '\n';

	nowa++;
	cout << "nowa =" << nowa << '\n';

	++nowa;
	cout << "nowa =" << nowa << '\n';

	nowa *= 10;
	cout << "nowa =" << nowa << '\n';

	--nowa;
	cout << "nowa =" << nowa << '\n';

	nowa--;
	cout << "nowa =" << nowa << '\n';

	return 0;

}

int main15()

{
	int a = 5;
	int b = 4;

	cout << "Podaj a:" << a << '\n';
	cout << "Podaj b:" << b << '\n';
	
	cout << "a + b = " << a + b << '\n';
	cout << "a - b = " << a - b << '\n';
	cout << "a * b = " << a * b << '\n'; 
	cout << "a / b = " << a / b << '\n';
	cout << "a % b = " << a % b << '\n';

return 0;
}

int main ()

{
	double a = 5;
	double b = 4;

	cout << "Podaj a:" << a << '\n';
	cout << "Podaj b:" << b << '\n';

	cout << "a + b = " << a + b << '\n';
	cout << "a - b = " << a - b << '\n';
	cout << "a * b = " << a * b << '\n';
	cout << "a / b = " << a / b << '\n';

	return 0;
}

// czy ot tak mozna zmieniac include?
// kiedy siê konczy include np. iostream ? czy jest jakas komenda konczaca czy jesli raz okreslimy ze bedziemy korzystac z tej biblioteki to ona zostaje?
// dyrektywa preprocesora include? u nas iostream, w poradniku cstdio, jakie jeszcze s¹ biblioteki, czym siê rózni¹ i jakich u¿ywamy? :D
// int main() w nawiasach musimy coœ wpisywaæ czy moze zostac wolne? void...
// int main12345... jak ustawiæ kolejnoœæ wykonanywanie poszczególnych zadan? £adnie to pokaza³es na pierwszej lekcji :D
// printf cos mi nie dzia³a
// w 60 wierszu przypisa³em wartoœc do jeden znak = 23 a wyskakuje jakies chujostwo
// \n czasami nie moge wstawic na koncu wiersza, daje na poczatku nowego, ale podejrzewam, ¿e mo¿na wrzuciæ na koniec tylko nie wiem jak