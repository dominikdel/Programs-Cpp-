#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Struktura klienta
struct Client
{
    string imie; // zmienna - imie, typu - string do tworzenia słów
    int czasZakupow;
};

int main()
{
    queue<Client> kolejka; // Kolejka klientów
    // Używamy std::queue do przechowywania klientów
    // Kolejka FIFO (First In First Out)
    // FIFO - pierwszy wszedł, pierwszy wyszedł
    // .push() - dodaje element na koniec kolejki
    // .pop() - usuwa element z początku kolejki
    // .front() - zwraca element z początku kolejki
    // .back() - zwraca ostatni element kolejki
    // .empty() - sprawdza, czy kolejka jest pusta
    int wybor; // Zmienna do wyboru opcji w menu

    do
    {                                     // Pętla do-while do obsługi menu
        cout << "\n=== MENU ===" << endl; // Wyświetlenie menu
        cout << "1. Dodaj klienta do kolejki" << endl;
        cout << "2. Obsłuż klienta z kolejki" << endl;
        cout << "3. Wyświetl kolejkę" << endl;
        cout << "4. Wyjdź" << endl;
        cout << "Wybierz opcję (1-4): ";
        cin >> wybor;

        switch (wybor)
        { // Obsługa wyboru opcji

        case 1:
        {                                                                     // Dodanie klienta do kolejki
            Client nowy;                                                      // Tworzenie nowego klienta
            cout << "Podaj imię klienta: ";                                   // Pobranie imienia klienta
            cin >> nowy.imie;                                                 // Dodanie imienia klienta
            cout << "Podaj czas zakupów (w sekundach): ";                     // Pobranie czasu zakupów klienta
            cin >> nowy.czasZakupow;                                          // Dodanie czasu zakupów
            kolejka.push(nowy);                                               // Dodanie klienta do kolejki
            cout << "Dodano klienta " << nowy.imie << " do kolejki." << endl; // Potwierdzenie dodania klienta
            break;
        }
            // c++ stack
            //queue<T> = kolejka, która trzyma dane typu T (np. Client)
            // .push() = dodaj
            // .pop() = usuń pierwszego
            // .front() = pokaż pierwszego
            // .empty() = czy pusta
            // .size() = ile jest

        case 2:
        {
            if (!kolejka.empty())
            {
                Client aktualny = kolejka.front();
                cout << "Obsługuję klienta: " << aktualny.imie
                     << " (czas zakupów: " << aktualny.czasZakupow << " sek)" << endl;
                kolejka.pop();
            }
            else
            {
                cout << "Kolejka jest pusta!" << endl;
            }
            break;
        }
        case 3:
        {
            if (kolejka.empty())
            {
                cout << "Kolejka jest pusta!" << endl;
            }
            else
            {
                cout << "Klienci w kolejce:" << endl;
                queue<Client> temp = kolejka;
                while (!temp.empty())
                {
                    Client c = temp.front();
                    cout << "- " << c.imie << " (" << c.czasZakupow << " sek)" << endl;
                    temp.pop();
                }
            }
            break;
        }
        case 4:
        {
            cout << "Kończę program, sklep zamknięty. Do zobaczenia!" << endl;
            break;
        }
        default:
            cout << "Nie ma takiej opcji ziomek. Wybierz 1-4." << endl;
        }
    } while (wybor != 4);

    return 0;
}
