//Viết chương trình cho phép người dùng nhập vào hai số nguyên dương a và n. Sử dụng cấu trúc lặp đã học để tính a luỹ thừa n (a^n).
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,n;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap n: ";
    cin >> n;
    int KetquaLuythua = pow(a,n);
    cout << "Ket qua: " << KetquaLuythua <<endl;
    return 0;
}