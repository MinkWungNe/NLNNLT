#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Sau khi hoan vi: a= " << a << " b= " << b << endl;
    return 0;
}