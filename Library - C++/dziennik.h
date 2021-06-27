#ifndef DZIENNIK_H
#define DZIENNIK_H
#include"czasopismo.h"

class dziennik:virtual public czasopismo
{
    std::string ktora_godzina;
protected:
    std::string nazwa_dziennika;
public:
    dziennik(bool);

    std::string return_godzina();
    void change_godzina(std::string nowa_godzina);

    std::string return_nazwa_dziennika();
    void change_nazwa_dziennika(std::string nowa_nazwa_dziennika);
};
#endif
