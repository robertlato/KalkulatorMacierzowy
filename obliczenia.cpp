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

void mnoz(int **matryca_1, int **matryca_2, 
        int rozmiar_wiersza, int rozmiar_kolumny, int kolumna_2)
{
    for (int i = 0; i < rozmiar_wiersza; i++)
    {
        for (int j = 0; j < kolumna_2; j++)
        {
            int wynik = 0;
            for (int k = 0; k < rozmiar_kolumny; k++)
                wynik += matryca_1[i][k] * matryca_2[k][j];
            std::cout << wynik << " ";
        }
        std::cout << "\n";
    }
}


void mnoz_l(int **matryca_1, int liczba, 
            int rozmiar_wiersza, int rozmiar_kolumny)
{
    for (int i = 0; i < rozmiar_wiersza; i++)
    {
        for (int j = 0; j < rozmiar_kolumny; j++)
        {
            std::cout << matryca_1[i][j] * liczba << " ";
        }
        std::cout << "\n";
    }
}