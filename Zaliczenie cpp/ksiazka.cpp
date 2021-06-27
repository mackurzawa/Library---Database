#include"ksiazka.h"

ksiazka::ksiazka(bool czy_czytac)
    :wydawnictwo(czy_czytac)
{
    if(czy_czytac)
    {
        std::cout<<"Podaj jaka oprawe ma ksiazka:\t";
        getline(std::cin, oprawa);
        std::cout<<"Podaj rok wydania:\t";
        getline(std::cin, rok_wydania);
    }

}

std::string ksiazka::return_oprawa()
{
    return oprawa;
}

void ksiazka::change_oprawa(std::string nowa_oprawa)
{
    oprawa = nowa_oprawa;
}

std::string ksiazka::return_rok_wydania()
{
    return rok_wydania;
}

void ksiazka::change_rok_wydania(std::string nowy_rok_wydania)
{
    rok_wydania = nowy_rok_wydania;
}
