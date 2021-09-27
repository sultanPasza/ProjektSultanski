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
	jeden_znak = 'a';
	
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

int main16 ()

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


// int main()
//{ main15()
// main14()
// return 0}


// porównywanie



int main17()

{

	bool porownanie = 123 >= 321;

	cout << "porownanie = " << porownanie<< '\n';
	cout << "porownanie = " << (111 != 222) << '\n';
	cout << "porownanie = " << (777 == 777) << '\n';
	cout << "porownanie = " << (777 < 777) << '\n';
	return 0;
}

int main18()

{
	int zmienna = 5;
	bool popatrzNaTo = 10 * 4 + zmienna / 2 <= zmienna * 8;
	cout << "popatrzNaTo = " << popatrzNaTo << '\n';
	return 0;

}

// operacje logiczne


int main19()

{

	bool wynik = true;
	cout << "wynik = " << wynik << '\n';
	cout << "wynik = " << !wynik << '\n';
	cout << "wynik = " << !!wynik << '\n';
	wynik = !wynik;
	cout << "wynik = " << wynik << '\n';
	wynik = !(123 > 345);
	cout << "wynik = " << wynik << '\n';
	return 0;


}


int main20()

{
	bool wynik = false || false;
	cout << "wynik (false || false) = " << wynik << '\n';
	wynik = false || true;
	cout << "wynik (false || true) = " << wynik << '\n';
	wynik = true || true;
	cout << "wynik (true || true) = " << wynik << '\n';
	bool a = false;
	bool b = false;
	wynik = a || b || true;
	cout << "wynik (a || b || true) = " << wynik << '\n';
	bool c = false;
	cout << "(a||b||c) = " << (a || b || c) << '\n';
	b = true;
	cout << "(a||b||c) = " << (a || b || c) << '\n';
	cout << "(a || !b || c) = " << (a || !b || c) << '\n';
	return 0;

}

int main21()

{
	bool wynik;
	int liczba;

	liczba = -100;
	wynik = liczba >= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	liczba = 0;
	wynik = liczba >= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	liczba = 7;
	wynik = liczba <= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	liczba = 8;
	wynik = liczba >= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	liczba = 10; 
	wynik = liczba >= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	liczba = 100; 
	wynik = liczba >= 10 || liczba < 0 || liczba == 7;
	cout << "liczba = " << liczba << ", wynik = " << wynik << '\n';

	return 0;

}

int main22()

{
	bool wynik = false && false;
	cout << "wynik (false && false) = " << wynik << '\n';
	wynik = false && true;
	cout << "wynik (false && true) = " << wynik << '\n';

	wynik = true && true;
	cout << "wynik (true && true) = " << wynik << '\n';

	bool a = false;
	bool b = false;
	wynik = a && b && true;
	cout << "wynik (a && b && true) = " << wynik << '/n';

	bool c = false;
	cout << "(a&&b&&c) = " << (a && b && c) << '\n';

	b = true;
	cout << "(a&&b&&c) = " << (a && b && c) << '\n';

	cout << "(a && !b && c) = " << (a && !b && c) << '\n';
	cout << "(!a && b && !c) = " << (!a && b && !c) << '\n';

	return 0;

}

// wiersz 391; po debugowaniu jakies badziewie w wyniku sie pojawia


int main23()

{
	bool wynik;

	wynik = true && false || true && false || !(!true && false);

	cout << "wynik = " << wynik << '\n';

	return 0;

}

// if 

int main24()

{
	int wiek = 30;
	bool wyrazenie = wiek > 100 || wiek < 2;
	cout << "wynik = " << wyrazenie << '\n';
	return 0;
}

int main25()

{
	int wiek;
	cout << "Podaj wiek" << '\n';
	cin >> wiek;
	if (wiek >= 18)
		cout << "Twierdzisz, ze jestes pelnoletni :)" << '\n';

	cout << "Koniec" << '\n';
	return 0;

}


int main26()

{
	int wiek;
	cout << "Podaj wiek" << '\n';
	cin >> wiek;
	if (wiek >= 18)
	{
		cout << "Twierdzisz, ze jestes pelnoletni :)" << '\n';
		cout << "ale nikogo to nie interesuje? " << '\n';
	}
	cout << "Koniec" << '\n';
	return 0;

}



int main27()

{
	int liczba;
	cout << "Podaj liczbe :" << '\n';
	cin >> liczba;
	if (liczba >= 10)
	{
		cout << "Liczba jest >=10 " << '\n';
		if (liczba >= 50)
		{
			cout << "Liczba jest >= 50 " << '\n';
			if (liczba <= 100)
			{
				cout << "Liczba jest <= 100 " << '\n';

			}
		}
	}
	cout << "Koniec" << '\n';
	return 0;
}

int main28()

{

	int wiek;
	cout << "Podaj wiek :" << '\n';
	cin >> wiek;
	if (wiek >= 18)
	{
		cout << "Jestes pelnoletni" << '\n';
	}
	else

	{
		cout << "Nie jestes pelnoletni" << '\n';
	}
	cout << "Koniec" << '\n';

	
	return 0;

}


int main29()

{
	int liczba;
	cout << "Podaj liczbe" << '\n';
	cin >> liczba;
	switch (liczba)
	{
	case 2:
		cout << "dwa" << '\n';
		break;
	case 1:
		cout << "jeden" << '\n';
		break;
	case 3:
		cout << "trzy" << '\n';
		break;
	default:
		cout << "ani jeden ani dwa ani trzy" << '\n';
		break;

	}
	return 0;

}

int main30()

{
	int liczba;
	cout << "Podaj liczbe" << '\n';
	cin >> liczba;
	switch (liczba)
	{
	case 2:
		cout << "dwa" << '\n';
	case 1:
		cout << "jeden" << '\n';
	case 3:
		cout << "trzy" << '\n';
	}
	return 0;
}

int main31()

{

	int liczba;
	cout << "Podaj liczbe" << '\n';
	cin >> liczba;
	char innazmienna = 'B';
	switch (liczba)
	{
	case 1 :
		char mojazmienna;
		mojazmienna = 'A';
		cout << "Znak" << mojazmienna << '\n';
		break;
	case 2:
		cout << "Znak" << innazmienna << '\n';
		break;
	case 3:
	{
		char ostatniazmienna = 'C';
		cout << "Znak" << ostatniazmienna << '\n';
		break;

	}
	default:
		cout << "ani jeden ani dwa ani trzy" << '\n';
		break;

	}
	return 0;
}


// poziom 

// petla do while


int main32()

{

	int ile = 4;
	do
	{
		cout << "Napis" << '\n';
		ile--; // odejmujemy 1
	} while (ile > 0);

	return 0;
}
// 4 x napis

int main33()

{
	int ile;

	cout << "Ile razy napisac napis? " << '\n';
	cin >> ile;
	if (ile > 0)
		do
		{
			cout << "Napis" << '\n';
			ile--; // odejmujemy 1
		} while (ile > 0);

		return 0;
}

// tyle ile chcemy

int main34()

{

	int ile;

	cout << "Ile razy wypisac napis?" << '\n';
	cin >> ile;
	int pozycja = 1;
	if (ile > 0)
		do
		{
			cout << "Napis nr " << pozycja << '\n';
			pozycja++;
			ile--;
		} while (ile > 0);

	return 0;

}

int main35()

{

	int liczba;
	do
	{
		cout << "Podaj liczbe 123 aby zakonczyc petle" << '\n';
		cin >> liczba;
		cout << "Podales liczbe" << liczba << '\n';

	} while (liczba != 123);

	cout << "Dzieki" << '\n';

	return 0;

}

int main36()

{
	int liczba;
	do
	{
		cout << "Podaj liczbe 1 jesli Zyd to frajer" << '\n';
		cin >> liczba;
		cout << "Podales liczbe " << liczba << '\n';
		cout << "Zyd to ..." << '\n';

	} while (liczba != 1);
	cout << "FRAJER" << '/n';
	return 0;
} 

// wyskakuje w wyniku liczba, ocb?

#include<cstdlib>
#include<ctime>

int main37()

{
	srand(time(NULL));
	cout << "Losowanie pierwsze: " << ((rand() % 50) + 7) << '\n';
	int liczba = ((rand() % 50 )+7);
	cout << "Losowanie drugie: " << liczba << '\n';
	liczba = ((rand() % 50)+7);
	cout << "Losowanie trzecie: " << liczba << '\n';
	return 0;

}

void funkcja()
{
	cout << "[1] - dodawanie" << '\n';
	cout << "[2] - odejmowanie" << '\n';
	cout << "[0] - wyjscie z programu" << '\n';
}

void dodawanie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a + b = " << a + b << '\n';

}

void odejmowanie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a - b = " << a - b << '\n';
}

int main38()
{
	cout << "W programie sa dostepne nastepujace opcje:" << '\n';
	funkcja();
	cout << "Zycze przyjemnego korzystania z programu" << '\n' << '\n';
	int liczba;
	do
	{
		funkcja();
		cout << "Ktora opcje wybierasz?" << '\n';
		cin >> liczba;
		switch (liczba)
		{
		case 1:
			dodawanie();
			break;
		case 2:
			odejmowanie();
			break;
		default:
			break;
		}
	} while (liczba != 0);
	return 0;
}

float dodawanieinne()
{
	float a;
	cin >> a;
	float b;
	cin >> b;
	return a + b;
}

int main39()
{
	cout << "Wprowadz dwie liczby: "<< '\n';
	'\n';
	float tubedziewynik = dodawanieinne();
	cout << "Wynik dodawania wynosi: " << tubedziewynik << '\n';
	return 0;
}

// float void roznice

int dodawanie(int a, int b)
{
	return a + b;
}

//w 711 stworzylismy zmienna void dodawanie, w 782 stworzylismy zmienna int dodawanie, czy to nie bedzie bledne, nachodzic na siebie?
//int main40()
//{
	//int iWynik = dodawanie(123, 456);
	//cout << "Wynik dodawania wynosi: " << iWynik << '\n';
//}

// po uruchomieniu int 41 wyskakuje blad ze w 791 musi wyskoczyc wartosc
int main41()

{
	int liczby[3];
	cout << "Podaj liczbe 1:"<< '\n';
	cin >> liczby[0];
	cout << "Podaj liczbe 2:" << '\n';
	cin >> liczby[1];
	liczby[2] = 567;
	cout << "liczby[2] wynosi " << liczby[2] << '\n';
	int suma = liczby[0] + liczby[1] + liczby[2];
	cout << "Suma = " << suma << '\n';
	return 0;

}

int main42()
{
	int liczba[10];
	int licznik = 0;
	do
	{
		cout << "Wprowadz liczbe " << '\n';
		std::cin >> liczba[licznik];
		licznik++;
	} while (licznik < 10);

	std::cout << "Podales nastepujace liczby: ";
	licznik = 0;
	do
	{
		std::cout << liczba[licznik] << ", ";
		licznik++;
	} while (licznik < 10);

	return 0;
}


// Zadania domowe
// petle do while zad 2

void Kalkulator()

{
	cout << "Program Kalkulator posiada nastepujace opcje:" << '\n';
	cout << "[1] - Dodawanie" << '\n';
	cout << "[2] - Odejmowanie" << '\n';
	cout << "[3] - Mnozenie" << '\n';
	cout << "[4] - Dzielenie" << '\n';
	cout << "[0] - Wyjscie z programu.";
}

void Kalkulatordodawanie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a + b = " << a + b << '\n';

}

void Kalkulatorodejmowanie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a - b = " << a - b << '\n';
}

void Kalkulatormnozenie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a * b = " << a * b << '\n';
}

void Kalkulatordzielenie()

{
	int a;
	cout << "Podaj a" << '\n';
	cin >> a;
	int b;
	cout << "Podaj b" << '\n';
	cin >> b;
	cout << "a / b = " << a / b << '\n';
}

int main43()
{
	int liczba;
	do
	{
		Kalkulator(), '\n';
		cout << "Ktora opcje wybierasz?" << '\n';
		cin >> liczba;
		switch (liczba)
		{
		case 1:
			Kalkulatordodawanie();
			break;
		case 2:
			Kalkulatorodejmowanie();
			break;
		case 3:
			Kalkulatormnozenie();
			break;
		case 4:
			Kalkulatordzielenie();
			break;
		default:
			break;
		}
	} while (liczba != 0);
	return 0;
}

// jak przesunac ktora opcje wybierasz do nastepnej linijki?
// zastrzezenia dla dzielenia plus przed wprowadzeniem blednej zmiennej

int main44()
{
	srand(time(NULL));
	std::cout << "Losowanie pierwsze: " << ((std::rand() % 1000) + 1) << std::endl;
	int liczba = (std::rand() % 1000) + 1;
	std::cout << "Losowanie drugie: " << liczba << std::endl;
	liczba = (std::rand() % 1000) + 1;
	std::cout << "Losowanie trzecie: " << liczba << std::endl;
	return 0;
}

//int main45()

//{	
	//do
	//{
		//srand(time(NULL));
		//int liczba = (std::rand() % 5) + 1;
		//int swojaliczba;
		//cout << "Podaj swoja liczbe z przedzia³u 1-5" << '\n';
		//cin >> swojaliczba;
		//cout << "Wylosowana liczba to " << liczba << '\n';
	//} while (liczba != swoja liczba);
	//cout << "Sukces" << '\n';
	//return 0;
//}

// blad w while ()

int main46()

{	
	srand(time(NULL));
	int liczba = (std::rand() % 5) + 1;
	int swojaliczba;
	cout << "Podaj swoja liczbe z przedzialu 1-5" << '\n';
	cin >> swojaliczba;
	cout << "Wylosowana liczba to " << liczba << '\n';
	cout << "Sukces" << '\n';
	return 0;
}

int main()

{
	main46();
	return 0;
}