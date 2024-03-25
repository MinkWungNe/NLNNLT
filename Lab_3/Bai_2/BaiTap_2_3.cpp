//Viết chương trình cho phép người dùng nhập vào số nguyên. Kiểm tra n có phải là số nguyên tố hay không ?
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; int count = 0;
    cout << "Nhap n: ";
    cin >> n;
    if(n < 2)
    {
        cout << n << " Khong phai SO NGUYEN TO!" << endl;
        return 0;
    }
    for(int i = 2; i <= sqrt(n);i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        
    }

    if (count == 0)
    {
        cout << n << " la SO NGUYEN TO!" << endl;
    }
    else
    {
        cout << n << " Khong phai SO NGUYEN TO!" << endl;
    }
    return 0;
}