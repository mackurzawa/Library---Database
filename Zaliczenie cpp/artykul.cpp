#include"artykul.h"

artykul::artykul(bool czy_pytac)
    :czasopismo(czy_pytac), tygodnik(czy_pytac), dziennik(czy_pytac)
{
    if(czy_pytac)
    {
        std::cout<<"Podaj tytul artykulu:\t";
        getline(std::cin, tytul_artykulu);
        std::cout<<"Podaj ilosc slow:\t";
        getline(std::cin, ilosc_slow);
    }
    addElement(this);
}

std::string artykul::return_il_slow()
{
    return ilosc_slow;
}

void artykul::change_il_slow(std::string nowa_il_slow)
{
    ilosc_slow = nowa_il_slow;
}

std::string artykul::return_tytul_artykulu()
{
    return tytul_artykulu;
}

void artykul::change_tytul_artykulu(std::string nowy_tytul_artykulu)
{
    tytul_artykulu = nowy_tytul_artykulu;
}

//TO NIZEJ DO POPRAWY
void artykul::showDetails()
{
    std::cout<<std::endl;
    std::cout<<"Nazwa wydawnictwa:\t"<<return_nazwa_wyd()<<std::endl;
    std::cout<<"Numer ISSN wydawnictwa:\t"<<return_nr_issn()<<std::endl;
    std::cout<<"Dziedzina:\t"<<return_dziedzina()<<std::endl;
    std::cout<<"Nazwa czasopisma:\t"<<return_nazwa_czasop()<<std::endl;
    std::cout<<"Dzien tygodnia w ktory sie ukazuje:\t"<<return_dzien_tyg()<<std::endl;
    std::cout<<"Nazwa tygodnika:\t"<<return_nazwa_tygodnika()<<std::endl;
    std::cout<<"Godzina o ktorej dziennik sie ukazuje:\t"<<return_godzina()<<std::endl;
    std::cout<<"Nazwa dziennika:\t"<<return_nazwa_dziennika()<<std::endl;
    std::cout<<"Ilosc slow:\t"<<return_il_slow()<<std::endl;
    std::cout<<"Tytul artykulu:\t"<<return_tytul_artykulu()<<std::endl;
}

void artykul::modifyObject()
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

    std::cout<<"Dzien tygodnia w ktory sie ukazuje:\t";
    std::cin>>temp;
    change_dzien_tyg(temp);

    std::cout<<"Nazwa tygodnika:\t";
    std::cin>>temp;
    change_nazwa_tygodnika(temp);

    std::cout<<"Godzina o ktorej dziennik sie ukazuje:\t";
    std::cin>>temp;
    change_godzina(temp);

    std::cout<<"Nazwa dziennika:\t";
    std::cin>>temp;
    change_nazwa_dziennika(temp);

    std::cout<<"Ilosc slow:\t";
    std::cin>>temp;
    change_il_slow(temp);

    std::cout<<"Tytul artykulu:\t";
    std::cin>>temp;
    change_tytul_artykulu(temp);
}

void artykul::readFile(std::ifstream& rfile)
{
    std::string nw, ni, dz, nc, dt, nt, go, nd, is, ta;
    getline(rfile, nw);
    getline(rfile, ni);
    getline(rfile, dz);
    getline(rfile, nc);
    getline(rfile, dt);
    getline(rfile, nt);
    getline(rfile, go);
    getline(rfile, nd);
    getline(rfile, is);
    getline(rfile, ta);
    change_nazwa_wyd(nw);
    change_nr_issn(ni);
    change_dziedzina(dz);
    change_nazwa_czasop(nc);
    change_dzien_tyg(dt);
    change_nazwa_tygodnika(nt);
    change_godzina(go);
    change_nazwa_dziennika(nd);
    change_il_slow(is);
    change_tytul_artykulu(ta);
}

std::ostream& operator<<(std::ostream& os, artykul obiekt)
{
    return os<<"artykul\n"+obiekt.return_nazwa_wyd()+"\n"+obiekt.return_nr_issn()+"\n"+obiekt.return_dziedzina()+"\n"+obiekt.return_nazwa_czasop()+"\n"+obiekt.return_dzien_tyg()+"\n"+obiekt.return_nazwa_tygodnika()+"\n"+obiekt.return_godzina()+"\n"+obiekt.return_nazwa_dziennika()+"\n"+obiekt.return_il_slow()+"\n"+obiekt.return_tytul_artykulu()+"\n";
}
