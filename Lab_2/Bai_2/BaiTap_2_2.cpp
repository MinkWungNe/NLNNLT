#include <iostream>
using namespace std;

int n;
int bot = rand() % 3 + 1;

void PlayerChoose()
{
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
}
void BotChoose()
{
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
}   
int Ketqua()
{
    if (n == bot)
    {
        printf("Ban da hoa!");
    }
    else if (n == 1 && bot == 2 || n == 2 && bot == 3 || n == 3 && bot == 1)
    {
        printf("Ban da thua!");
    }
    else if (n == 3 && bot == 2 || n == 1 && bot == 3 || n == 2 && bot == 1 )
    {
        printf("Ban da thang!");
    }
}

int main()
{
    cout << "Moi ban chon:\n" 
    << "1.Keo\n" 
    << "2.Bua\n" 
    << "3.Bao\n";
    cin >> n;

    PlayerChoose();
    BotChoose();
    Ketqua();
    return 0;  
}