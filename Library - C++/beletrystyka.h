#ifndef BELETRYSTYKA_H
#define BELETRYSTYKA_H
#include"ksiazka.h"
#include"generyczna.h"

class beletrystyka:public ksiazka, public generyczna <beletrystyka>
{
    std::string autor;
protected:
    std::string tytul;
public:
    beletrystyka(bool);

    void showDetails();
    void modifyObject();
    void readFile(std::ifstream&);

    std::string return_autor();
    void change_autor(std::string nowy_autor);

    std::string return_tytul();
    void change_tytul(std::string nowy_tytul);

};

std::ostream& operator<<(std::ostream& os, beletrystyka obiekt);


#endif
