#include <iostream>
using namespace std;
//prototype bool chiahetKQ kiemtrachiahet(int a, int b)

int main()
{
    int a, b;
    string Ketqua;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if (a % b == 0)
    {
        Ketqua = "Ket qua: a chia het cho b";
    }
    else
    {
        Ketqua = "Ket qua: a khong chia het cho b";
    }
    cout << Ketqua;
    return 0;
}
