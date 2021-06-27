#ifndef KSIAZKA_H
#define KSIAZKA_H
#include"wydawnictwo.h"

class ksiazka:public wydawnictwo
{
    std::string oprawa;
protected:
    std::string rok_wydania;
public:
    ksiazka(bool);

    std::string return_oprawa();
    void change_oprawa(std::string nowa_oprawa);

    std::string return_rok_wydania();
    void change_rok_wydania(std::string nowy_rok_wydania);
};
#endif
