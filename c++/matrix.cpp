#include <iostream>
#include <windows.h>   // potrzebne do kolorków i Sleep
#include <cstdlib>     // rand, srand
#include <ctime>       // time
using namespace std;

int main() {
    // Ustawienie konsoli
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);
    int szerokosc = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int wysokosc = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    srand(time(NULL)); // żeby za każdym razem było inaczej

    while (true) {
        // Losowe kolumny do efektu spadania
        for (int i = 0; i < szerokosc; i++) {
            // Losowo zdecyduj, czy coś spadnie w tej kolumnie
            if (rand() % 15 == 0) {
                // Losowy znak ASCII (duże litery lub cyfry)
                char znak = 33 + rand() % 94;

                // Zmieniamy kolor tekstu na zielony z intensywnością
                SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout << znak;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;

        // Małe opóźnienie żeby było płynnie
        Sleep(50);
    }

    return 0;
}
