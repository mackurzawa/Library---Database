#include"dziennik.h"

dziennik::dziennik(bool czy_pytac)
    :czasopismo(czy_pytac)
{
    if(czy_pytac)
    {
        std::cout<<"Podaj godzine o ktorej ukazuje sie dziennik:\t";
        getline(std::cin, ktora_godzina);
        std::cout<<"Podaj nazwe dziennika:\t";
        getline(std::cin, nazwa_dziennika);
    }
}

std::string dziennik::return_godzina()
{
    return ktora_godzina;
}

void dziennik::change_godzina(std::string nowa_godzina)
{
    ktora_godzina = nowa_godzina;
}

std::string dziennik::return_nazwa_dziennika()
{
    return nazwa_dziennika;
}

void dziennik::change_nazwa_dziennika(std::string nowa_nazwa_dziennika)
{
    nazwa_dziennika = nowa_nazwa_dziennika;
}
