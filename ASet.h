class ASet
{
private:
    int size;
    Foo* foo;
    int label;
  public:
    ASet(int size); // size - ������������ ���������� ����� � ���������

    ~ASet();
    void incl(double);  // �������� ����� � ���������,
                     // ���� ����� ����� ��� ����, �� ������ �� ������
    void excl(double);  // ���������
    bool contain(double); // ���������� � ���������?
    void print(); // ����������� ��������� �������
};
struct Foo {
    double elem;
    bool isEmpty=true; //0-empty 1- fuul
};
