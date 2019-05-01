/*
    Autor: Robert Latoszewski
    Data utworzenia: 01.05.2019

    Opis: 
        Kalkulator macierzowy
*/

#include <iostream>
#include "obliczenia.h"

using namespace std;

//*****************************************************************************
//****** deklaracje funkcji ******//

void wczytaj_dane(int operacja);

//*****************************************************************************
//****** glowny program ********// 

int main()
{
    system("clear");
    cout << "*** Kalkulator macierzowy ***\n\n";
    cout << "Wybierz operacje:\n"
            "1. Dodawanie\n"
            "2. Odejmowanie\n"
            "3. Mnozenie\n"
            "4. Mnozenie przez liczbe\n"
            "5. Wyjscie\n";
    int operacja;
    cin >> operacja;
    switch (operacja)
    {
        case 1:     //dodawanie
            wczytaj_dane(operacja);
            break;
        case 2:     //odejmowanie
            cout << "przypadek 2\n";
            break;
        case 3:     //mnozenie
            cout << "przypadek 3\n";
            break;
        case 4:     //mnozenie przez liczbe
            cout << "przypadek 4\n";
            break;
        case 5:     //wyjscie
            cout << "przypadek 5\n";
            break;
        default:
            cout << "Bledne dane, koncze program\n";
            return 0;
    }
    return 0;
}

//*****************************************************************************
//****** definicje funkcji ********// 

void wczytaj_dane(int operacja)
{
    int wiersz_1, wiersz_2, kolumna_1, kolumna_2;
    if (operacja)
    {
        cout << "Rozmiar 1 matrycy: ";
        cin >> wiersz_1 >> kolumna_1;
        cout << "Rozmiar 2 matrycy: ";
        cin >> wiersz_2 >> kolumna_2;
        // w przypadku dodawania i odejmowania
        if (operacja == 1 || operacja == 2)
        {
            if (wiersz_1 != wiersz_2 || kolumna_1 != kolumna_2)
            cout << "\nOperacja niewykonalna\n";
            else
            {
                // tworze matryce 1

                int **matryca_1 = new int*[wiersz_1];
                for (int i = 0; i < wiersz_1; i++)
                    matryca_1[i] = new int[kolumna_1];
                
                // tworze matryce 2

                int **matryca_2 = new int*[wiersz_2];
                for (int i = 0; i < wiersz_2; i++)
                    matryca_2[i] = new int[kolumna_2];

                // wczytuje 1 matryce
                cout << "\nPodaj 1 matryce:\n";
                for (int i = 0; i < wiersz_1; i++)
                {
                    for (int j = 0; j < kolumna_1; j++)
                    cin >> matryca_1[i][j];
                }
                // wczytuje 2 matryce
                cout << "\nPodaj 2 matryce:\n";
                for (int i = 0; i < wiersz_2; i++)
                {
                    for (int j = 0; j < kolumna_2; j++)
                    cin >> matryca_2[i][j];
                }
                // wykonuje operacje i wyswietlam wynik
                cout << "\nWynik:\n";
                if (operacja == 1) dodaj(matryca_1, matryca_2, wiersz_1, kolumna_1);
                else dodaj(matryca_1, matryca_2, wiersz_1, kolumna_1);
            }
        }
    }
}