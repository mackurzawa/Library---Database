#ifndef POPULARNONAUKOWA_H
#define POPULARNONAUKOWA_H
#include"ksiazka.h"
#include"generyczna.h"

class popularnonaukowa:public ksiazka, public generyczna <popularnonaukowa>
{
    std::string autor;
protected:
    std::string tytul;
public:
    popularnonaukowa(bool);

    void showDetails();
    void modifyObject();
    void readFile(std::ifstream&);

    std::string return_autor();
    void change_autor(std::string nowy_autor);

    std::string return_tytul();
    void change_tytul(std::string nowy_tytul);
};
std::ostream& operator<<(std::ostream& os, popularnonaukowa obiekt);
#endif
