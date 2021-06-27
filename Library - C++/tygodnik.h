#ifndef TYGODNIK_H
#define TYGODNIK_H
#include"czasopismo.h"

class tygodnik:virtual public czasopismo
{
    std::string ktory_dzien_tygodnia;
protected:
    std::string nazwa_tygodnika;
public:
    tygodnik(bool);

    std::string return_dzien_tyg();
    void change_dzien_tyg(std::string nowy_dzien_tyg);

    std::string return_nazwa_tygodnika();
    void change_nazwa_tygodnika(std::string nowa_nazwa_tygodnika);
};
#endif
