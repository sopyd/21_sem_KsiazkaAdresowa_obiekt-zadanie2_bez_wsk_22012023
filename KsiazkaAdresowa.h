#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMeneger.h"
#include "AdresatMeneger.h"
#include "PlikZAdresatami.h"

using namespace std;

class KsiazkaAdresowa
{
    int pobraneIdZalogowanegoUzytkownika;

    UzytkownikMeneger uzytkownikMeneger;
    AdresatMeneger adresatMeneger;

public:
    // konstruktor a po dwukropku lista inicjalizacyjna
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMeneger(nazwaPlikuZUzytkownikami), adresatMeneger(nazwaPlikuZAdresatami) {
        uzytkownikMeneger.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZPliku();
    bool czyUzytkownikJestZalogowany();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

};

#endif

