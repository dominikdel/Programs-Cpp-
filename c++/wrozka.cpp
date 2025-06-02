#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // HANDLE hOut; // uchwyt do konsoli

    // hOut = GetStdHandle(STD_OUTPUT_HANDLE); // 👉 "Weź mi uchwyt do konsoli, do której wypisujemy tekst."
    // cout << "Standart" << endl
    //      << endl;

    // SetConsoleTextAttribute(hOut, BACKGROUND_RED); // To jest funkcja z Windows API, która zmienia kolor tekstu lub tła w konsoli.
    //                                                  // hOut → do której konsoli się odnosi.
    //                                                  // BACKGROUND_RED → mówi, że tło ma być czerwone.
    //                                                  // 🟥 Efekt: wszystkie kolejne rzeczy wypisane w cout będą miały czerwone tło (ale tekst zostaje w domyślnym kolorze, np. szarym).

    // cout << "Ten napis jest z czerwonym tlem i zwykłym tekstem" << flush << endl // flush oznacza: "wypchnij wszystko natychmiast do konsoli", tak dla pewności, że tekst się pokaże bez buforowania.
    //      << endl;

    // SetConsoleTextAttribute(hOut, FOREGROUND_RED); // Teraz zmieniamy kolor tekstu na czerwony, ale tło zostaje takie samo.
    // cout << "Ten napis jest czerwony bez tla" << endl;

    string wróżby[] = { // tablica z wróżbami
        "Za 3 dni znajdziesz 5 zł... ale w pralce.",
        "Twój komputer dziś Cię zdradzi. Blue screen incoming.",
        "Nie ucz się jutro. I tak nic nie zapamiętasz.",
        "Dziś masz szczęście! Ale tylko do jedzenia.",
        "Twoja miłość życia właśnie scrolluje TikToka.",
        "Twój nauczyciel informatyki to tak naprawdę robot.",
        "Nie ufaj ludziom z dwiema myszkami. To podejrzane.",
        "Jutro dostaniesz 6... ale tylko jak się obudzisz przed 7.",
        "Twoje przyszłe dziecko będzie fanem Messiego. Trudno.",
        "Za godzinę pomyślisz: 'Po co ja to czytałem?'"};

    srand(time(NULL)); // ziarno dla losowania

    char decyzja; // zmienna do decyzji użytkownika, char jest lepsza do pojedynczych znaków
    do
    {
        int index = rand() % 10; // losujemy indeks od 0 do 9
        cout << "\n🔮 AI Wróżka mówi: " << wróżby[index] << endl; 

        cout << "\nChcesz kolejną wróżbę? (t/n): "; 
        cin >> decyzja;
    } while (decyzja == 't' || decyzja == 'T'); 

    cout << "\nDo zobaczenia w przyszłości... albo i nie 😈\n";
    return 0;
}
