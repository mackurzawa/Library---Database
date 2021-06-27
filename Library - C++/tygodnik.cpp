#include"tygodnik.h"

tygodnik::tygodnik(bool czy_pytac)
    :czasopismo(czy_pytac)
{
    if(czy_pytac)
    {
        std::cout<<"Podaj dzien tygodnia kiedy ukazuje sie tygodnik:\t";
        getline(std::cin, ktory_dzien_tygodnia);
        std::cout<<"Podaj nazwe tygodnika:\t";
        getline(std::cin, nazwa_tygodnika);
    }
}

std::string tygodnik::return_dzien_tyg()
{
    return ktory_dzien_tygodnia;
}

void tygodnik::change_dzien_tyg(std::string nowy_dzien)
{
    ktory_dzien_tygodnia = nowy_dzien;
}

std::string tygodnik::return_nazwa_tygodnika()
{
    return nazwa_tygodnika;
}

void tygodnik::change_nazwa_tygodnika(std::string nowa_nazwa_tygodnika)
{
    nazwa_tygodnika = nowa_nazwa_tygodnika;
}
