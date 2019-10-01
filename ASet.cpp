#include "ASet.h"
void ASet::ASet(int size)
{
    this->size= size;
    this->foo= new Foo[size];
    label=0;
}
void ASet::~ASet()
{
 delete[] foo;
}
void ASet::incl( double elem)
{
    for(int i=0, i<=label, i++)
    {
        if(foo[i].elem==elem)
        {
            return;
        }
    }
    if(label<=size)
    {
        foo[label].elem = elem;
        foo[label].isEmpty = false;
        label+=1;
    }
}
void ASet::excl(double tar)
{
    if(tar>0 || tar<=size)
    {
        foo[tar].isEmpty=true;
    }
}
bool ASet::contain(double elem)
{
    for(int i=0, i<=label, i++)
    {
        if(foo[i].elem==elem)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void ASet::print()
{
    for(int i=0, i<=label, i++)
    {
        cout << foo[i].elem<< endl;
    }
}
