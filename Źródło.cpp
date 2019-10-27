#include <iostream>


long double obliczanie(long double obecna,unsigned  int nr);
unsigned int pobieranie(void);

int main()
{
	long double silnia = 1;
	unsigned int nr= pobieranie();
	
	obliczanie(silnia, nr);

	std::cin.get();
	std::cin.get();
	return 0;
}


long double obliczanie(long double  obecna, unsigned int nr)
{
	if (nr > 1)
		obecna *= obliczanie(obecna, nr - 1);
	obecna *= nr;
	std::cout.precision(18);
	std::cout << obecna << "\t\t" << nr << '\n';
	return obecna;
}
unsigned int pobieranie(void)
{
	unsigned int liczba;
	std::cout << "Podaj liczbe z jakiej potrzebujesz silnie: ";
	while (!(std::cin >> liczba))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
		std::cout << "blad znaku, sprobuj jeszcze raz\n";
	}
	return liczba;
}