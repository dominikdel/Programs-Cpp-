# 🚀 Mój Kurs C++ – Start w Świecie Programowania 💻

Witaj w moim repo z nauką C++! Jeśli też zaczynasz swoją przygodę albo chcesz przypomnieć sobie podstawy – to miejsce jest dla Ciebie (a dla mnie to przypał, jak czegoś nie zrobię, więc też motywacja 😉).

## 🔧 Wymagania – Co Musisz Mieć

1. **Visual Studio Code (VS Code)** – edytor kodu.
2. **Kompilator C++ (MinGW)** – żeby kod się tłumaczył na język zrozumiały dla kompa.
3. **Rozszerzenie do C++ w VS Code** – dla podpowiedzi i kompilacji.

---

## 🛠️ Jak to zainstalować?

### 1. Zainstaluj **VS Code**  
👉 Pobierz z: [https://code.visualstudio.com/](https://code.visualstudio.com/)

### 2. Zainstaluj **MinGW (kompilator C++)**
https://code.visualstudio.com/docs/languages/cpp

- Wejdź na: [https://www.mingw-w64.org/](https://www.mingw-w64.org/)
- Pobierz wersję dla Windows.
- Podczas instalacji wybierz:
  - **Architecture**: `x86_64`
  - **Threads**: `posix`
  - **Exception**: `seh`
- Po instalacji dodaj folder `bin` (np. `C:\mingw-w64\...\bin`) do **zmiennej środowiskowej PATH**.

### 3. Sprawdź, czy działa:

Odpal terminal (np. CMD) i wpisz:

```bash
g++ --version
