#include "ASet.h"
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main()
{
   cout<<"Ener size of your array: ";
   int size;
   cin>>size;
   ASet data(size);
   string end="NotEnd";
   int val;
   while(end!="end")
   {
       cout<<"Enter value: 1"<<endl;
       cout<<"Exclude value: 2"<<endl;
       cout<<"Contain value: 3"<<endl;
       cout<<"Print array: 4"<<endl;
       cout<<"End: 0"<<endl;
       cin>>val;

       if(val==1)//Enter value
       {
           cout<<"Enter value in your array :";
           double k;
           cin>>k;
           data.incl(k);
           data.print();
       }
       if(val==2)//Exclude value
       {
            cout<<"Enter the value of the item to delete: ";
            double tar;
            cin>>tar;
            data.excl(tar); //исключение элемента по значению из объекта класса
            data.print(); //вывод только что измененной объект класса
       }
       if(val==3)//Contain value
       {
           double l;
           cout<<"Is the value contanted in the array: ";
           cin>>l;
           if(data.contain(l)) //содержится ли элемент в объекте  класса
           {
               cout<<"Yes!"<<endl;
           }
           else
           {
               cout<<"No!"<<endl;
           }
       }
       if(val==4)//Print array
       {
           data.print();
       }
       if(val==0)//End
       {
           end="end";
       }
       if(val!=0 && val!=1 && val!=2 && val!=3 && val!=4)
       {
           cout<<"There is no option!"<<endl;
       }
   }
   /*for(double elem=0; elem<size; elem++) //заполнение объекта класса
   {
       data.incl(elem);
   }

   data.print(); //вывод только что заполненной объекта класса

   cout<<"Enter the value of the item to delete: ";
   double tar;
   cin>>tar;
   data.excl(tar); //исключение элемента по значению из объекта класса

   data.print(); //вывод только что измененной объект класса
   double l;
   cout<<"Is the value contanted in the array: ";
   cin>>l;
   if(data.contain(l)) //содержится ли элемент в объекте  класса
   {
       cout<<"Yes!"<<endl;
   }
   else
   {
       cout<<"No!"<<endl;
   }*/



    return 0;
}
