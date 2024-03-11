#include <iostream>
using namespace std;
//prototype bool chiahetKQ kiemtrachiahet(int a, int b)

int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if (a % b == 0)
    {
        printf("Ket qua: a chia het cho b");
    }
    else
    {
        printf("Ket qua: a khong chia het cho b");
    }
    return 0;
}
