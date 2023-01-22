#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMeneger.h"

class AdresatMeneger
{
    int idZalogowanegoUzytkownika;

    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:

    AdresatMeneger(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {

        idZalogowanegoUzytkownika = pobierzIdZalogowanegoUzytkownika();
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };

    int pobierzIdZalogowanegoUzytkownika();

    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);

};

#endif
