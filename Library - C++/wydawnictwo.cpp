#include"wydawnictwo.h"

wydawnictwo::wydawnictwo(bool czy_pytac)
{
    if(czy_pytac)
    {
        std::cin.ignore();
        //std::cout<<"Podaj nazwe wydawnictwa:\t";
        getline(std::cin, nazwa_wydawnictwa);
        std::cout<<"Podaj nr ISSN wydawnictwa:\t";
        getline(std::cin, numer_ISSN_wydawnictwa);
    }

}

std::string wydawnictwo::return_nr_issn()
{
    return numer_ISSN_wydawnictwa;
}

void wydawnictwo::change_nr_issn(std::string nowy_issn)
{
    numer_ISSN_wydawnictwa = nowy_issn;
}

std::string wydawnictwo::return_nazwa_wyd()
{
    return nazwa_wydawnictwa;
}

void wydawnictwo::change_nazwa_wyd(std::string nowa_nazwa_wyd)
{
    nazwa_wydawnictwa = nowa_nazwa_wyd;
}
