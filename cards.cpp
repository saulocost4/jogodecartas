#include "cards.h"
#include <iostream>
#include <vector> 

void printCarta(const Carta &carta)
{
    switch (carta.valor)
    {
        case DOIS:       std::cout << "2";   break;
        case TRES:       std::cout << "3";   break;
        case QUATRO:     std::cout << "4";   break;
        case CINCO:      std::cout << "5";   break;
        case SEIS:       std::cout << "6";   break;
        case SETE:       std::cout << "7";   break;
        case OITO:       std::cout << "8";   break;
        case NOVE:       std::cout << "9";   break;
        case DEZ:        std::cout << "T";   break;
        case VALETE:     std::cout << "V";   break;
        case DAMA:       std::cout << "D";   break;
        case REI:        std::cout << "R";   break;
        case AS:         std::cout << "A";   break; 
    }

    switch (carta.naipe)
    {
        case PAUS:      std::cout << "P";   break;
        case OUROS:     std::cout << "O";   break;
        case COPAS:     std::cout << "C";   break;
        case ESPADAS:   std::cout << "E";   break;
    } 
}

void printBaralho(const std::vector<Carta, 52> &baralho)
{
    for (const auto &carta : baralho)
    {
        printCarta(carta);
        std::cout << ' ';
    }

    std::cout << '\n';
}

void trocarCarta(Carta &a, Carta &b)
{
    Carta temp = a; 
    a = b;
    b = temp;
}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);

}

void embaralharBaralho(const std::vector<Carta, 52> &baralho)
{
    using index_t = std::array<Carta, 52>::size_type;
    for (index_t index = 0; index < 52; ++index)
    {
        index_t trocaIndex = getRandomNumber(0,51);

        trocarCarta(baralho[index], baralho[trocaIndex]);
    }
}
