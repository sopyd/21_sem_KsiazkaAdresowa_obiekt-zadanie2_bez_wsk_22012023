#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "PlikTekstowy.h"
#include "MetodyPomocnicze.h"


class PlikZAdresatami
{
    int idOstatniegoAdresata;
    fstream plikTekstowy;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string nazwaPlikuZAdresatami;

    bool czyPlikJestPusty(fstream &plikTekstowy);

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami) : nazwaPlikuZAdresatami(nazwaPlikuZAdresatami){
        idOstatniegoAdresata = 0; // inicjalizacja w konstruktorze
    };

    bool dopiszAdresataDoPliku(Adresat adresat);

    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);

    int pobierzIdOstatniegoAdresata(); // getter
    void wczytajIdOstatniegoAdresata(int Id);

};

#endif
