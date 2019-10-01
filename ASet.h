class ASet
{
private:
    int size;
    Foo* foo;
    int label;
  public:
    ASet(int size); // size - максимальное количество чисел в множестве

    ~ASet();
    void incl(double);  // включить число в множество,
                     // если такое число уже есть, то ничего не делать
    void excl(double);  // исключить
    bool contain(double); // содержится в множестве?
    void print(); // распечатать состояние объекта
};
struct Foo {
    double elem;
    bool isEmpty=true; //0-empty 1- fuul
};
