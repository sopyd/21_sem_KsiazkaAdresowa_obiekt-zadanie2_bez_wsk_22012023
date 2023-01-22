#include "KsiazkaAdresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMeneger.rejestracjaUzytkownika(); // dzialania na obiekcie a nie klasie
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMeneger.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMeneger.logowanieUzytkownika();
    if(uzytkownikMeneger.czyUzytkownikJestZalogowany())
    {
        pobraneIdZalogowanegoUzytkownika = adresatMeneger.pobierzIdZalogowanegoUzytkownika();
        adresatMeneger.wczytajAdresatowZPliku(pobraneIdZalogowanegoUzytkownika);
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMeneger.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMeneger.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMeneger.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMeneger.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wczytajAdresatowZPliku()
{
    adresatMeneger.wczytajAdresatowZPliku(uzytkownikMeneger.pobierzIdZalogowanegoUzytkownika());
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMeneger.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "MENU GLOWNE" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << "MENU UZYTKOWNIKA" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

