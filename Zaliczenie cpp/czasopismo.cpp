#include"czasopismo.h"

czasopismo::czasopismo(bool czy_czytac)
    :wydawnictwo(czy_czytac)
{
    if(czy_czytac)
    {
        std::cout<<"Podaj dziedzine czasopisma:\t";
        getline(std::cin, dziedzina);
        std::cout<<"Podaj nazwe czasopisma:\t";
        getline(std::cin, nazwa_czasopisma);
    }

}

std::string czasopismo::return_dziedzina()
{
    return dziedzina;
}

void czasopismo::change_dziedzina(std::string nowa_dziedzina)
{
    dziedzina = nowa_dziedzina;
}

std::string czasopismo::return_nazwa_czasop()
{
    return nazwa_czasopisma;
}

void czasopismo::change_nazwa_czasop(std::string nowa_nazwa_czasop)
{
    nazwa_czasopisma = nowa_nazwa_czasop;
}
