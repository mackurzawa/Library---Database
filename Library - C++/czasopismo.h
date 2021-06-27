#ifndef CZASOPISMO_H
#define CZASOPISMO_H
#include"wydawnictwo.h"

class czasopismo:public wydawnictwo
{
    std::string dziedzina;
protected:
    std::string nazwa_czasopisma;
public:
    czasopismo(bool);

    std::string return_dziedzina();
    void change_dziedzina(std::string nowa_dziedzina);

    std::string return_nazwa_czasop();
    void change_nazwa_czasop(std::string nowa_nazwa_czasop);
};
#endif
