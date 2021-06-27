#include"miesiecznik.h"

miesiecznik::miesiecznik(bool czy_pytac)
    :czasopismo(czy_pytac)
{
    if(czy_pytac)
    {
        std::cout<<"Podaj nazwe miesiecznika:\t";
        getline(std::cin, nazwa_miesiecznika);
        std::cout<<"Podaj dzien miesiaca:\t";
        getline(std::cin, ktory_dzien_miesiaca);
    }
    addElement(this);
}

std::string miesiecznik::return_dzien_miesiaca()
{
    return ktory_dzien_miesiaca;
}

void miesiecznik::change_dzien_miesiaca(std::string nowy_dzien_miesiaca)
{
    ktory_dzien_miesiaca = nowy_dzien_miesiaca;
}

std::string miesiecznik::return_nazwa_miesiecznika()
{
    return nazwa_miesiecznika;
}

void miesiecznik::change_nazwa_miesiecznika(std::string nowa_nazwa_miesiecznika)
{
    nazwa_miesiecznika = nowa_nazwa_miesiecznika;
}

//TO NIZEJ DO POPRAWY
void miesiecznik::showDetails()
{
    std::cout<<std::endl;
    std::cout<<"Nazwa wydawnictwa:\t"<<return_nazwa_wyd()<<std::endl;
    std::cout<<"Numer ISSN wydawnictwa:\t"<<return_nr_issn()<<std::endl;
    std::cout<<"Dziedzina:\t"<<return_dziedzina()<<std::endl;
    std::cout<<"Nazwa czasopisma:\t"<<return_nazwa_czasop()<<std::endl;
    std::cout<<"Ktory dzien miesiaca:\t"<<return_dzien_miesiaca()<<std::endl;
    std::cout<<"Nazwa miesiecznika:\t"<<return_nazwa_miesiecznika()<<std::endl;
}

void miesiecznik::modifyObject()
{
    std::string temp;
    std::cout<<std::endl;

    std::cout<<"Nazwa wydawnictwa:\t";
    std::cin>>temp;
    change_nazwa_wyd(temp);

    std::cout<<"Numer ISSN wydawnictwa:\t";
    std::cin>>temp;
    change_nr_issn(temp);

    std::cout<<"Dziedzina:\t";
    std::cin>>temp;
    change_dziedzina(temp);

    std::cout<<"Nazwa czasopisma:\t";
    std::cin>>temp;
    change_nazwa_czasop(temp);

    std::cout<<"Dzien miesiaca w ktory sie ukazuje:\t";
    std::cin>>temp;
    change_dzien_miesiaca(temp);

    std::cout<<"Nazwa miesiecznika:\t";
    std::cin>>temp;
    change_nazwa_miesiecznika(temp);
}

void miesiecznik::readFile(std::ifstream& rfile)
{
    std::string nw, ni, dz, nc, dm, nm;
    getline(rfile, nw);
    getline(rfile, ni);
    getline(rfile, dz);
    getline(rfile, nc);
    getline(rfile, dm);
    getline(rfile, nm);
    change_nazwa_wyd(nw);
    change_nr_issn(ni);
    change_dziedzina(dz);
    change_nazwa_czasop(nc);
    change_dzien_miesiaca(dm);
    change_nazwa_miesiecznika(nm);
}

std::ostream& operator<<(std::ostream& os, miesiecznik obiekt)
{
    return os<<"miesiecznik\n"+obiekt.return_nazwa_wyd()+"\n"+obiekt.return_nr_issn()+"\n"+obiekt.return_dziedzina()+"\n"+obiekt.return_nazwa_czasop()+"\n"+obiekt.return_dzien_miesiaca()+"\n"+obiekt.return_nazwa_miesiecznika()+"\n";
}
