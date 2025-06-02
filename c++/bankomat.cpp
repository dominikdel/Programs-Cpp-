#include <iostream>
using namespace std;

int main()
{
    double saldo = 1000.0;
    int wybor;
    double wplata;
    double wyplata;
    const int PIN = 1234; // stały PIN
    int podanyPIN;
    int proby = 0;
    const int MAX_PROBY = 5;

    // próba logowania
    while (proby < MAX_PROBY)
    {
        cout << "Podaj PIN: ";
        cin >> podanyPIN;

        if (podanyPIN == PIN)
        {
            cout << "PIN poprawny. Dostęp przyznany!\n";
            break;
        }
        else
        {
            proby++;
            cout << "Zły PIN! Pozostało prób: " << MAX_PROBY - proby << endl;
        }
    }

    if (proby == MAX_PROBY)
    {
        cout << "Za dużo prób. Bankomat zablokowany. Elo!" << endl;
        return 0;
    }

    // menu bankomatu
    do
    {
        cout << "\n=== MENU BANKOMATU ===" << endl;
        cout << "1. Sprawdź stan konta" << endl;
        cout << "2. Wpłać pieniądze" << endl;
        cout << "3. Wypłać pieniądze" << endl;
        cout << "4. Wyjdź" << endl;
        cout << "Twój wybór: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            // TODO: wyświetl stan konta
            cout << "Stan konta: " << saldo << " PLN" << endl;
            break;
        case 2:
            // TODO: wpłacenie pieniędzy
            cout << "Wpisz ile chcesz wpłacić pieniędzy: ";
            cin >> wplata;
            saldo = saldo + wplata;
            cout << "Wpłacono na konto " << wplata << " PLN." << endl;
            break;
        case 3:
            // TODO: wypłacenie pieniędzy z zabezpieczeniem
            cout << "Wpisz ile chcesz wypłacić pieniędzy: ";
            cin >> wyplata;
            if (wyplata <= saldo)
            {
                saldo = saldo - wyplata;
                cout << "Wypłacono z konta " << wyplata << " PLN." << endl;
            }
            else
                cout << "Wypłata jest niemożliwa, nie masz wystarczających środków na koncie!" << endl;

            break;
        case 4:
            cout << "Dzięki za użycie bankomatu. Elo!" << endl;
            break;
        default:
            cout << "Nie ma takiej opcji, ziomek." << endl;
        }

    } while (wybor != 4);

    return 0;
}
