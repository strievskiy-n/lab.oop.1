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
    int size; //максимальный размер массива
    Foo* foo; //структура в которой убдут храниться числа
    int label; //номер ячейки массива данных на котором остановилась запись
public:
    ASet(int size); // size - максимальное количество чисел в множестве
    ASet();// Перегруженный конструктор
    ~ASet(); //деструктор
    void incl(double elem);  // включить число в множество,
                     // если такое число уже есть, то ничего не делать
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
    }  // исключить
    bool contain(double elem); // содержится в множестве?
    void print(); // распечатать состояние объекта
};

