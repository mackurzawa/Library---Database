#include<iostream>
#include"generyczna.h"
#include"popularnonaukowa.h"
#include"beletrystyka.h"
#include"miesiecznik.h"
#include"tygodnik.h"
#include"dziennik.h"
#include"artykul.h"


std::string CD()
{
    std::string next_node;
    std::cin>>next_node;
    return next_node;
}

void MO(std::string current_node)
{
    if(current_node == "POPULARNONAUKOWA")
        new popularnonaukowa(true);
    else if (current_node == "BELETRYSTYKA")
        new beletrystyka(true);
    else if (current_node == "MIESIECZNIK")
        new miesiecznik(true);
    else if (current_node == "ARTYKUL")
        new artykul(true);
}

void DO(std::string current_node)
{
    int index;
    //std::cout<<"Podaj index:\t";
    std::cin>>index;

    if(current_node == "POPULARNONAUKOWA")
        generyczna <popularnonaukowa>::delObj(index);
    else if (current_node == "BELETRYSTYKA")
        generyczna <beletrystyka>::delObj(index);
    else if (current_node == "MIESIECZNIK")
        generyczna <miesiecznik>::delObj(index);
    else if (current_node == "ARTYKUL")
        generyczna <artykul>::delObj(index);
}

void MDO(std::string current_node)
{
    int index;
    //std::cout<<"Podaj index:\t";
    std::cin>>index;

    if(current_node == "POPULARNONAUKOWA")
        generyczna <popularnonaukowa>::modObj(index);
    else if (current_node == "BELETRYSTYKA")
        generyczna <beletrystyka>::modObj(index);
    else if (current_node == "MIESIECZNIK")
        generyczna <miesiecznik>::modObj(index);
    else if (current_node == "ARTYKUL")
        generyczna <artykul>::modObj(index);
}

void DIR(std::string current_node)
{

    if(current_node == "WYDAWNICTWO")
    {
        generyczna <popularnonaukowa>::DIR();
        generyczna <beletrystyka>::DIR();
        generyczna <miesiecznik>::DIR2();
        generyczna <artykul>::DIR3();
    }
    else if(current_node == "KSIAZKA")
    {
        generyczna <popularnonaukowa>::DIR();
        generyczna <beletrystyka>::DIR();
    }
    else if(current_node == "POPULARNONAUKOWA")
    {
        generyczna <popularnonaukowa>::DIR();
    }
    else if(current_node == "BELETRYSTYKA")
    {
        generyczna <beletrystyka>::DIR();
    }
    else if(current_node == "CZASOPISMO")
    {
        generyczna <miesiecznik>::DIR2();
        generyczna <artykul>::DIR3();
    }
    else if(current_node == "MIESIECZNIK")
    {
        generyczna <miesiecznik>::DIR2();
    }
    else if(current_node == "TYGODNIK")
    {
        generyczna <artykul>::DIR3();
    }
    else if(current_node == "DZIENNIK")
    {
        generyczna <artykul>::DIR3();
    }
    else if(current_node == "ARTYKUL")
    {
        generyczna <artykul>::DIR3();
    }

}

void SHOW(std::string current_node)
{
    int index;
    //std::cout<<"Podaj index:\t";
    std::cin>>index;

    if(current_node == "POPULARNONAUKOWA")
        generyczna <popularnonaukowa>::showD(index);
    else if (current_node == "BELETRYSTYKA")
        generyczna <beletrystyka>::showD(index);
    else if (current_node == "MIESIECZNIK")
        generyczna <miesiecznik>::showD(index);
    else if (current_node == "ARTYKUL")
        generyczna <artykul>::showD(index);
}

void SAVE()
{
    std::string file_name;
    std::cout<<"Podaj nazwe pliku:\t";
    std::cin.ignore();
    getline(std::cin, file_name);

    std::ofstream sfile;
    sfile.open(file_name);
    generyczna <popularnonaukowa>::save2file(sfile);
    generyczna <beletrystyka>::save2file(sfile);
    generyczna <miesiecznik>::save2file(sfile);
    generyczna <artykul>::save2file(sfile);
    sfile.close();
}

void READ()
{
    std::string file_name;
    std::cout<<"Podaj nazwe pliku:\t";
    std::cin.ignore();
    getline(std::cin, file_name);

    std::ifstream rfile;
    rfile.open(file_name);


        std::string type;
        while(!rfile.eof())
        {
            getline(rfile, type);
            if(type == "popularnonaukowa")
            {
                popularnonaukowa* obiekt = new popularnonaukowa(false);
                obiekt->readFile(rfile);
            }
            if(type == "beletrystyka")
            {
                beletrystyka* obiekt = new beletrystyka(false);
                obiekt->readFile(rfile);
            }
            if(type == "miesiecznik")
            {
                miesiecznik* obiekt = new miesiecznik(false);
                obiekt->readFile(rfile);
            }
            if(type == "artykul")
            {
                artykul* obiekt = new artykul(false);
                obiekt->readFile(rfile);
            }
        }



    rfile.close();
}

void TREE()
{
    std::cout<<"WYDAWNICTWO"<<std::endl;
    std::cout<<"\tKSIAZKA"<<std::endl;
    std::cout<<"\t\tPOPULARNONAUKOWA"<<std::endl;
    std::cout<<"\t\tBELETRYSTYKA"<<std::endl;
    std::cout<<"\tCZASOPISMO"<<std::endl;
    std::cout<<"\t\tMIESIECZNIK"<<std::endl;
    std::cout<<"\t\tTYGODNIK"<<std::endl;
    std::cout<<"\t\t\tARTYKUL"<<std::endl;
    std::cout<<"\t\tDZIENNIK"<<std::endl;
    std::cout<<"\t\t\tARTYKUL"<<std::endl;
}



int main()
{
    std::string current_node = "WYDAWNICTWO";
    std::string users_opt;
    do
    {
        //std::cout<<current_node<<std::endl;
        std::cin>>users_opt;


        if (users_opt == "CD")
            current_node = CD();
        else if (users_opt == "MO")
            MO(current_node);
        else if (users_opt == "DO")
            DO(current_node);
        else if (users_opt == "MDO")
            MDO(current_node);
        else if (users_opt == "DIR")
            DIR(current_node);
        else if (users_opt == "SHOW")
            SHOW(current_node);
        else if (users_opt == "SAVE")
            SAVE();
        else if (users_opt == "READ")
            READ();
        else if (users_opt == "TREE")
            TREE();
    }while(users_opt != "EXIT");
}
