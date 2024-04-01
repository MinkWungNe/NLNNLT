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