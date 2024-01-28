#include <iostream>
using namespace std;

class Number
{
private:
    float x;

public:
    friend istream &operator>>(istream &is, Number &u)
    {
        is >> u.x;
        return is;
    }

    friend ostream &operator<<(ostream &os, Number u)
    {
        os << u.x;
        return os;
    }

    Number operator+(Number);
    Number operator-(Number);
    Number operator*(Number);
    Number operator/(Number);
};

Number Number::operator+(Number n)
{
    Number t;
    t.x = x + n.x;
    return t;
}

Number Number::operator-(Number n)
{
    Number t;
    t.x = x - n.x;
    return t;
}

Number Number::operator*(Number n)
{
    Number t;
    t.x = x * n.x;
    return t;
}

Number Number::operator/(Number n)
{
    Number t;
    t.x = x / n.x;
    return t;
}

int main()
{
    Number n, m, addition, subtraction, multiplication, division;
    //cin >> n >> m;
    cout << "Nhap n= "; cin >> n;
	cout << "Nhap m= "; cin >> m;

    addition = n + m;
    cout << "Cong: " << n << "+" << m << "= " << addition << endl; 

    subtraction = n - m;
    cout << "Tru: " << n << "-" << m << "= " << subtraction << endl;;

    multiplication = n * m;
    cout << "Nhan: " << n << "*" << m << "= " << multiplication << endl;

    division = n / m;
    cout << "Chia: " << n << "/" << m << "= " << division << endl;

    return 0;
}
