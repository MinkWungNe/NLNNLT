#include <iostream>
using namespace std;

const int MAX = 100;
void chuyen_vi_ma_tran(int matran[MAX][MAX], int hang, int cot)
{
    int chuyen_vi[MAX][MAX];
    for (int x = 0; x < hang; ++x)
    {
        for (int y = 0; y < cot; ++y)
        {
            chuyen_vi[y][x] = matran[x][y];
        }
    }

    cout  << "Ma tran sau chuyen vi: " << endl;
    for (int y = 0; y < cot; y++)
    {
        for (int x = 0; x < hang ; x++)
        {
            cout << chuyen_vi << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int hang, cot;
    cout << "Nhap so hang: ";
    cin >> hang;
    cout << "Nhap so cot: ";
    cin >> cot;

    int matran[MAX][MAX];
    cout << "Nhap cac phan tu cua ma tran: " << endl;
    for (int x = 0; x < hang ; x++)
    {
        for (int y = 0; y < cot; y++)
        {
            cout << "hang " << x + 1 << " cot "<< y + 1 << endl;
            cin >> matran[x][y];
        }
    }

    chuyen_vi_ma_tran(matran, hang, cot);
    return 0;
}