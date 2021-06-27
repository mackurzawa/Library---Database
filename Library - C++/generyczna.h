#ifndef GENERYCZNA_H
#define GENERYCZNA_H
#include<vector>


template <typename T>
class generyczna
{
public:
    static std::vector <T*> lista;
    void addElement(T* element)
    {
        lista.push_back(element);
    }
    static void showD(int index)
    {
        lista[index]->showDetails();
    }
    static void delObj(int index)
    {
        lista.erase(lista.begin()+index);
    }
    static void modObj(int index)
    {
        lista[index]->modifyObject();
    }
    static void DIR()
    {
        for(unsigned int i=0; i<lista.size(); i++)
        {
            std::cout<<"Tytul ksiazki:\t"<<lista[i]->return_tytul()<<" - Autor:\t"<< lista[i]->return_autor()<<std::endl;
        }
    }
    static void DIR2()
    {
        for(unsigned int i=0; i<lista.size(); i++)
        {
            std::cout<<"Nazwa miesiecznika:\t"<<lista[i]->return_nazwa_miesiecznika()<<" - Produkowany kazdego "<< lista[i]->return_dzien_miesiaca()<<". dnia miesiaca"<<std::endl;
        }
    }
    static void DIR3()
    {
        for(unsigned int i=0; i<lista.size(); i++)
        {
            std::cout<<"Tytul artykulu:\t"<<lista[i]->return_tytul_artykulu()<<" - Slow:\t"<< lista[i]->return_il_slow()<<std::endl;
        }
    }
    static void save2file(std::ofstream& sfile)
    {
        for(unsigned int i=0; i<lista.size(); i++)
        {
            sfile<<*(lista[i]);
        }
    }


};

template<typename T>
std::vector <T*> generyczna <T>::lista;
#endif
