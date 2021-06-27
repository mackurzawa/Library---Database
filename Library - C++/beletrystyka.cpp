#include"beletrystyka.h"

beletrystyka::beletrystyka(bool czy_pytac)
    :ksiazka(czy_pytac)
{
    if(czy_pytac)
    {
        std::cout<<"Podaj tytul:\t";
        getline(std::cin, tytul);
        std::cout<<"Podaj autora:\t";
        getline(std::cin, autor);
    }
    addElement(this);
}

std::string beletrystyka::return_autor()
{
    return autor;
}

void beletrystyka::change_autor(std::string nowy_autor)
{
    autor = nowy_autor;
}

std::string beletrystyka::return_tytul()
{
    return tytul;
}

void beletrystyka::change_tytul(std::string nowy_tytul)
{
    tytul = nowy_tytul;
}

//TO NIZEJ DO POPRAWY
void beletrystyka::showDetails()
{
    std::cout<<std::endl;
    std::cout<<"Nazwa wydawnictwa:\t"<<return_nazwa_wyd()<<std::endl;
    std::cout<<"Numer ISSN wydawnictwa:\t"<<return_nr_issn()<<std::endl;
    std::cout<<"Oprawa:\t"<<return_oprawa()<<std::endl;
    std::cout<<"Rok wydania:\t"<<return_rok_wydania()<<std::endl;
    std::cout<<"Autor:\t"<<return_autor()<<std::endl;
    std::cout<<"Tytul:\t"<<return_tytul()<<std::endl;
}

void beletrystyka::modifyObject()
{
    std::string temp;
    std::cout<<std::endl;

    std::cout<<"Nazwa wydawnictwa:\t";
    std::cin>>temp;
    change_nazwa_wyd(temp);

    std::cout<<"Numer ISSN wydawnictwa:\t";
    std::cin>>temp;
    change_nr_issn(temp);

    std::cout<<"Oprawa:\t";
    std::cin>>temp;
    change_oprawa(temp);

    std::cout<<"Rok wydania:\t";
    std::cin>>temp;
    change_rok_wydania(temp);

    std::cout<<"Autor:\t";
    std::cin>>temp;
    change_autor(temp);

    std::cout<<"Tytul:\t";
    std::cin>>temp;
    change_tytul(temp);

}

void beletrystyka::readFile(std::ifstream& rfile)
{
    std::string nw, ni, op, rw, au, ty;
    getline(rfile, nw);
    getline(rfile, ni);
    getline(rfile, op);
    getline(rfile, rw);
    getline(rfile, au);
    getline(rfile, ty);
    change_nazwa_wyd(nw);
    change_nr_issn(ni);
    change_oprawa(op);
    change_rok_wydania(rw);
    change_autor(au);
    change_tytul(ty);
}

std::ostream& operator<<(std::ostream& os, beletrystyka obiekt)
{
    return os<<"beletrystyka\n"+obiekt.return_nazwa_wyd()+"\n"+obiekt.return_nr_issn()+"\n"+obiekt.return_oprawa()+"\n"+obiekt.return_rok_wydania()+"\n"+obiekt.return_autor()+"\n"+obiekt.return_tytul()+"\n";
}
