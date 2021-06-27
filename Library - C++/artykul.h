#ifndef ARTYKUL_H
#define ARTYKUL_H
#include"tygodnik.h"
#include"dziennik.h"
#include"generyczna.h"

class artykul:public tygodnik, public dziennik, public generyczna <artykul>
{
    std::string ilosc_slow;
protected:
    std::string tytul_artykulu;
public:
    artykul(bool);

    void showDetails();
    void modifyObject();
    void readFile(std::ifstream&);

    std::string return_il_slow();
    void change_il_slow(std::string nowa_il_slow);

    std::string return_tytul_artykulu();
    void change_tytul_artykulu(std::string nowy_tytul_artykulu);
};
std::ostream& operator<<(std::ostream& os, artykul obiekt);
#endif
