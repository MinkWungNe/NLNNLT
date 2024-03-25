//Viết chương trình tính tổng S= 1 - 1/1*2 + 1/2*3 - 1/3*4 +...+ (-1)^n/n*(n+1)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float S = 0.0;
    cout << "Tinh tong S= 1 - 1/1*2 + 1/2*3 +...+ (-1)^n/n*(n+1)" << endl;
    cout << "Nhap n: ";
    cin >> n;
    if (n < 0)
    {
        cout << "vui long nhap n > 0" << endl;
        cout << "Nhap n: ";
        cin >> n;
    }
    else
    {
        for(int i = 1 ; i <= n ; i++)
        {
            S += 1.0/((i)*(i + 1));
        }
        cout << "Ket qua Tong S = " << S << endl;
    }
    return 0;
}