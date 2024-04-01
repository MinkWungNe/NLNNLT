/*******************************************************************************************************************************************************
*   Sử dụng cấu trúc lựa chọn và cấu trúc lặp đã học thực hiện các yêu cầu sau:                                                                        *
*                                                                                                                                                      *
*   a) Cho phép người dùng nhập vào lần lượt từng số thực. Việc nhập dữ liệu của người dùng sẽ kết thúc khi người dùng nhập vào số 0.                  *
*                                                                                                                                                      *
*   b) Hãy cho biết người dùng đã nhập vào bao nhiêu số thực (kể cả số 0) và số thực nhỏ nhất trong những số thực do người dùng nhập vào (kể cả số 0). *
********************************************************************************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    cout << "Nhap cac so thuc (ket thuc bang 0): " << endl;
    float input, smallest = 0;
    int count = 0;

    while (input != 0)
    {
        cout << "Nhap so thuc: ";
        cin >> input;
        if(count == 0 || input < smallest)
        {
            smallest = input;
        }
        count++;
    }

    cout << "Luong so thuc da nhap: " << count << endl;
    cout << "So nho nhat: " << smallest << endl;
}