#include <iostream>
#include <vector>

using namespace std;

class IntBox // pudelko na liczby calkowite
{
public:
   // explicit IntBox(int value) { value_ = value; } //SPROBUJ USTALIC CO TO JEST TO EXPLICIT
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



template <typename T> // do definiowania szablonow klas lub szablonow funkcji // w <> jest to co wyrozniamy czyli taka dziura
                        // T to taki parametr typu lub cokolwiek co bedzie zastapione w kompilacji innym typem
                        //parametrem szablonu moze tez byc liczba calkowita

class Box
{
public:
   // explicit IntBox(int value) { value_ = value; } //SPROBUJ USTALIC CO TO JEST TO EXPLICIT
    Box(T value) { value_ = value; }
    T getValue() const { return value_; }
    void setValue(T value) { this->value_ = value; }
private:
    T value_;
};

//template <typename T>
//T Box<T>::getValue() const {
//    return value_;
//}
//template <typename T>
//void setValue(T value) { this->value_ = value; }

void swapInts (int &lhs, int &rhs)
{
    int tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

template <typename Y>
void mySwapInts (Y &lhs, Y &rhs)
{
    Y tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

void demo2()
{
    cout << "demo2()" << endl;
    IntBox ib1{1};
    cout << "the value in ib1 = " << ib1.getValue() << endl;
    ib1.setValue(2);
    cout << "now the value in ib1 = " << ib1.getValue() << endl;
    cout << endl;

    Box<int> b1{1}; //juz dziala :)
    cout << "the value in ib1 = " << b1.getValue() << endl;
    b1.setValue(2);
    cout << "now the value in ib1 = " << b1.getValue() << endl;
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

    int x = 1, y= 5;
    cout << "niezamienione" << x << " " << y <<endl;
    mySwapInts<int> (x,y);
    cout << "zamienione"<< x <<" " << y <<endl;
}

int main()
{
    demo2();
    return 0;
}
