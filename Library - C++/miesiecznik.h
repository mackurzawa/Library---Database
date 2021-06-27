#ifndef MIESIECZNIK_H
#define MIESIECZNIK_H
#include"czasopismo.h"
#include"generyczna.h"

class miesiecznik:public czasopismo, public generyczna <miesiecznik>
{
    std::string ktory_dzien_miesiaca;
protected:
    std::string nazwa_miesiecznika;
public:
    miesiecznik(bool);

    void showDetails();
    void modifyObject();
    void readFile(std::ifstream&);

    std::string return_dzien_miesiaca();
    void change_dzien_miesiaca(std::string nowy_dzien_miesiaca);

    std::string return_nazwa_miesiecznika();
    void change_nazwa_miesiecznika(std::string nowa_nazwa_miesiecznika);
};
std::ostream& operator<<(std::ostream& os, miesiecznik obiekt);
#endif
