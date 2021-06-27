#ifndef WYDAWNICTWO_H
#define WYDAWNICTWO_H
#include<string>
#include<iostream>
#include<fstream>

class wydawnictwo
{
    std::string numer_ISSN_wydawnictwa;
protected:
    std::string nazwa_wydawnictwa;
public:
    wydawnictwo(bool);

    std::string return_nr_issn();
    void change_nr_issn(std::string nowy_issn);

    std::string return_nazwa_wyd();
    void change_nazwa_wyd(std::string nowa_nazwa_wyd);

};



#endif
