/*
Giả sử hôm nay là ngày 31-12-1999.
Nhập vào ngày sinh của một người. Tính số lần sinh nhật của người đó cho tới thời điểm hiện tại (31-12-1999). Ví dụ: Một người sinh vào ngày 31-12-1969 => Anh ta có 31 lần sinh nhật.
Giới hạn: Chỉ cho phép nhập năm sinh trong khoảng 1901-1999.
Lưu ý: Dữ liệu đầu vào luôn hợp lệ (không cần kiểm tra).
*/
#include <iostream>
using namespace std;

    int D = 31;
    int M = 12;
    int Y = 1999;
    int D1,M1,Y1;

bool DateMax(int day, int month, int year)
{
    return(1901 <= year <= 1999) && (day <= 31) && (month <= 12);
}

int main()
{
    cout << "Moi nhap ngay sinh: ";
    cin >> D1 >> M1 >> Y1;
    if(DateMax(D1,M1,Y1))
    {
        int Y2 = Y - Y1;
        cout << "Ban co " << Y2 << " lan sinh nhat!" << endl;
        return 0;
    }
    else
    {
        cout << "Nam sinh khong hop le!"<< endl;
        return 1;
    }


}