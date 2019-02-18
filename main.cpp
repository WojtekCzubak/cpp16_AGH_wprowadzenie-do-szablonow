#include <iostream>
#include <vector>

using namespace std;

class IntBox // pudelko na liczby calkowite
{
public:
    //explicit IntBox(int value) { value_ = value; } //SPROBUJ USTALIC CO TO JEST TO EXPLICIT
    IntBox(int value) { value_ = value; }
    int getValue() const { return value_; }
    void setValue(int value) { this->value_ = value; }
private:
    int value_;
};

class DoubleBox //do przechowywania doubli
{
public:
    DoubleBox(double value) { value_ = value; }
    double getValue() const { return value_; }
    void setValue(double value) { this->value_ = value; }
private:
    double value_;
};

class StringBox //do przechowywania stringow ZASTANOW SIE CO JEST STALE A CO JEST ZMIENNE !!!
{
public:
    StringBox(const string &value) { value_ = value; }
    string getValue() const { return value_; }
    void setValue(string value) { this->value_ = value; }
private:
    string value_;
};

void demo2()
{
    cout << "demo2()" << endl;
    IntBox ib1{1};
    cout << "the value in ib1 = " << ib1.getValue() << endl;
    ib1.setValue(2);
    cout << "now the value in ib1 = " << ib1.getValue() << endl;
    cout << endl;

    DoubleBox db1{2.71};
    cout << "the value in db1 = " << db1.getValue() << endl;
    db1.setValue(3.14);
    cout << "now the value in db1 = " << db1.getValue() << endl;
    cout << endl;

    StringBox sb1{"Ala"};
    cout << "the value in sb1 = " << sb1.getValue() << endl;
    sb1.setValue("Ola");
    cout << "now the value in sb1 = " << sb1.getValue() << endl;
    cout << endl;
}

int main()
{
    demo2();
    return 0;
}
