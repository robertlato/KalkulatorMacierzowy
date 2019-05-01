#include "obliczenia.h"
#include <iostream>

void dodaj(int **matryca_1, int **matryca_2, 
            int rozmiar_wiersza, int rozmiar_kolumny)
{
    for (int i = 0; i < rozmiar_wiersza; i++)
    {
        for (int j = 0; j < rozmiar_kolumny; j++)
        {
            std::cout << matryca_1[i][j] + matryca_2[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void odejmij(int **matryca_1, int **matryca_2, 
            int rozmiar_wiersza, int rozmiar_kolumny)
{
    for (int i = 0; i < rozmiar_wiersza; i++)
    {
        for (int j = 0; j < rozmiar_kolumny; j++)
        {
            std::cout << matryca_1[i][j] - matryca_2[i][j] << " ";
        }
        std::cout << "\n";
    }
}
