/* TATU REIJONEN - IIO14S1

Harjoitus 19 (Palautus vko 47)
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava : Näppäimistä toimii
nopeusanturina ja näyttä mittarin näyttänä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle.Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava :
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila)nopeus = 0 km / h
Anna nopeus : 10 = > 2 km / h
Anna nopeus : 20 = > 6 km / h
Anna nopeus : 30 = > 12 km / h
Anna nopeus : 40 = > 20 km / h
Anna nopeus : 50 = > 30 km / h
Anna nopeus : 50 = > 38 km / h
Anna nopeus : 50 = > 44 km / h
Anna nopeus : 50 = > 48 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : -5 = > loppu

Toteuta kayttaen taulukkoa.
__________________________________________________________________________*/

#include <iostream>
using namespace std;
const int max_t = 5;
int main()

{
	int taulukko[max_t] = { 0, 0, 0, 0, 0 };
	int i = 0;

	while (true)
	{
		cout << "Anna nopeus: ";
		cin >> taulukko[i];
		if (taulukko[i] < 0)
		{
			break;
		}
		i++;
		if (i == max_t)
			i = 0;
		cout << (taulukko[0] + taulukko[1] + taulukko[2] + taulukko[3] + taulukko[4]) / 5 << "km/h \n";

	}

	
}