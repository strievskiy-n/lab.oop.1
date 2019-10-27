#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
struct Foo
{
    double elem;
    bool isEmpty=true; //0-empty 1- full
};
class ASet
{
private:
    int size; //������������ ������ �������
    Foo* foo; //��������� � ������� ����� ��������� �����
    int label; //����� ������ ������� ������ �� ������� ������������ ������
public:
    ASet(int size); // size - ������������ ���������� ����� � ���������
    ASet();// ������������� �����������
    ~ASet(); //����������
    void incl(double elem);  // �������� ����� � ���������,
                     // ���� ����� ����� ��� ����, �� ������ �� ������
    void excl(double tar)
    {
        for(int l=0; l<=label; l++)
        {
            if(foo[l].elem==tar && foo[l].isEmpty==false)
            {
                foo[l].isEmpty=true;
                return;
            }
        }
    }  // ���������
    bool contain(double elem); // ���������� � ���������?
    void print(); // ����������� ��������� �������
};

