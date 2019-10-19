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
    ~ASet(); //деструктор
    void incl(double);  // включить число в множество,
                     // если такое число уже есть, то ничего не делать
    void excl(double);  // исключить
    bool contain(double); // содержится в множестве?
    void print(); // распечатать состояние объекта
};

