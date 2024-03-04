#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Moi ban chon:\n";
    cout << "1.Keo\n";
    cout << "2.Bua\n";
    cout << "3.Bao\n";
    cin >> n;
    int bot = rand() % 3 + 1;
    
    if (n == 1)
    {
        printf("Ban chon Keo\n");
    }
    else if (n == 2)
    {
        printf("Ban chon Bua\n");
    }
    else
    {
        printf("Ban chon Bao\n");
    }
    
    if (bot == 1)
    {
        printf("BOT chon Keo\n");
    }
    else if (bot == 2)
    {
        printf("BOT chon Bua\n");
    }
    else
    {
        printf("BOT chon Bao\n");
    }

    if (n == bot)
    {
        printf("Ban da hoa!");
    }
    else if (n == 1 && bot == 2)
    {
        printf("Ban da thua!");
    }
    else if (n == 1 && bot == 3)
    {
        printf("Ban da thang!");
    }
    else if (n == 2 && bot == 1)
    {
        printf("Ban da thang!");
    }
    else if (n == 2 && bot == 3)
    {
        printf("Ban da thua!");
    }
    else if (n == 3 && bot == 1)
    {
        printf("Ban da thua!");
    }
    else if (n == 3 && bot == 2)
    {
        printf("Ban da thang");
    }
    return 0;
}