#include "ASet.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
   cout<<"Ener size of your array: ";
   int val;
   cin>>val;
   ASet data(val);

   for(double i=0; i<=val; i++) //���������� ������� ������
   {
       data.incl(i);
   }

   data.print(); //����� ������ ��� ����������� ������� ������

   cout<<"Enter the value of the item to delete: ";
   double val_to_del;
   cin>>val_to_del;
   data.excl(val_to_del); //���������� �������� �� �������� �� ������� ������

   data.print(); //����� ������ ��� ���������� ������ ������

   cout<<"Is the value contanted in the array: ";
   cin>>val_to_del;
   if(data.contain(val_to_del)) //���������� �� ������� � �������  ������
   {
       cout<<"Yes!"<<endl;
   }
   else
   {
       cout<<"No!"<<endl;
   }

    return 0;
}
