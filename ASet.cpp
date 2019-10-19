#include "ASet.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void ASet::ASet(int size)// size - максимальное количество чисел в множестве
{
    if(size<=0)
    {
        cout<<"Not correct size!"<<endl;
        break;
    }
    else
    {
        this->size= size;
        this->foo= new Foo[size];
        label=0; //метка
    }
}
void ASet::~ASet()
{
 delete[] foo;
}
void ASet::incl( double elem) //¬ключение элемента в массив, если такое число уже есть, то ничего не делать
{
    for(int i=0; i<=label; i++)
    {
        if(foo[i].elem==elem && foo[i].isEmpty==false)
        {
            return;
        }
    }
    if(label<=size-1)
    {
        for(int p=0; p<=label; p++)
        {
            if(foo[p].isEmpty)
            {
                foo[p].elem= elem;
                foo[p].isEmpty = false;
                if(p==label)
                {
                    label+=1;
                }
                return;
            }
        }
    }
    else
    {
        cout<<"There no place in your array!"<<endl;
    }
}
void ASet::excl(double tar) // исключить элемент по значению
{
    for(int l=0; l<=label; l++)
    {
        if(foo[l].elem==tar && foo[i].isEmpty==false)
        {
            foo[l].isEmpty=true;
            return;
        }
    }
}
bool ASet::contain(double elem) // содержитс€ в множестве?
{
    int flag=0;
    for(int i=0; i<=label; i++)
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
    for(int i=0; i<=label; i++)
    {
        if(foo[i].isEmpty)
        {
            cout << foo[i].elem<< "it`s empty" << endl;
        }
        else
        {
            cout << foo[i].elem<< "it`s full"<< endl;
    }
}

