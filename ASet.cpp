#include "ASet.h"

using namespace std;

ASet::ASet(int size)// size - максимальное количество чисел в множестве
{
    if(size<=0)
    {
        cout<<"Not correct size!"<<endl;
        return;
    }
    else
    {
        this->size= size;
        this->foo= new Foo[size];
        label=0; //метка
    }
}
ASet::ASet() : ASet(10)
{
}


ASet::~ASet()
{
 delete[] foo;
}
void ASet::incl( double elem) //¬ключение элемента в массив, если такое число уже есть, то ничего не делать
{
    for(int i=0; i<label; i++)
    {
        if(foo[i].elem==elem && foo[i].isEmpty==false)
        {
            return;
        }
    }
    if(label<=size)
    {
        for(int p=0; p<label; p++)
        {
            if(foo[p].isEmpty)
            {
                foo[p].elem= elem;
                foo[p].isEmpty = false;
                return;
            }
        }
        if(label==size)
        {
            cout<<"There no place in your array!"<<endl;
        }
        if(label!=size)
        {
            if(foo[label].isEmpty)
            {
                foo[label].elem= elem;
                foo[label].isEmpty = false;
                label+=1;
            }
        }

    }
    else
    {
        cout<<"There no place in your array!"<<endl;
    }
}

bool ASet::contain(double elem) // содержитс€ в множестве?
{
    int flag=0;
    for(int i=0; i<label; i++)
    {
        if(foo[i].elem==elem && foo[i].isEmpty==false)
        {
            flag=1;
            return true;
        }
    }
    if(flag==0)
    {
        return false;
    }
}
void ASet::print()// распечатать состо€ние объекта
{
    for(int i=0; i<label; i++)
    {
        if(foo[i].isEmpty)
        {
            cout << foo[i].elem<< " it`s empty" << endl;
        }
        else
        {
            cout << foo[i].elem<< " it`s full"<< endl;
        }
    }
}

