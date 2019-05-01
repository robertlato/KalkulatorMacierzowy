#include "obliczenia.h"
#include <iostream>

void dodaj(int **matryca_1, int **matryca_2, 
            int rozmiar_wiersza, int rozmiar_kolumny)
{
    // tworze matryce do przechowania wyniku operacji

    int **wynik = new int*[rozmiar_wiersza];
    for (int i = 0; i < rozmiar_wiersza; i++)
        wynik[i] = new int[rozmiar_kolumny];

    for (int i = 0; i < rozmiar_wiersza; i++)
    {
        for (int j = 0; j < rozmiar_kolumny; j++)
        {
            wynik[i][j] = matryca_1[i][j] + matryca_2[i][j];
            std::cout << wynik[i][j] << " ";
        }
        std::cout << "\n";
    }
}