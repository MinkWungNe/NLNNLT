//Viết chương trình cho phép người dùng nhập vào hai số nguyên dương a và n. Sử dụng cấu trúc lặp đã học để tính a luỹ thừa n (a^n).
#include <iostream>
using namespace std;

int main()
{
    int a,n;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap n: ";
    cin >> n;
    //int KetquaLuythua = pow(a,n);
    int KetquaLuythua;
    for (int i = 0; i < n ; i++)
    {
        int KetquaLuythua = a*i;
    }
    cout << "Ket qua: " << KetquaLuythua <<endl;
    return 0;
}

// không nên dùng pow() vì với các bài toán cơ bản dùng pow() sẽ tiêu tốn tài nguyên ko cần thiết. Dùng for() để lặp sẽ cho kết quả nhanh hơn.