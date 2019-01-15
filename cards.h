#ifndef CARD_H
#define CARD_H

#include <vector>

enum CartaValor
{
    DOIS,
    TRES, 
    QUATRO,
    CINCO, 
    SEIS, 
    SETE, 
    OITO, 
    NOVE, 
    DEZ,
    VALETE, 
    DAMA, 
    REI, 
    AS,
    MAX_VALOR
}; 

enum CartaNaipe
{
    PAUS, 
    OUROS,
    COPAS, 
    ESPADAS,
    MAX_NAIPE
};

struct Carta
{
    CartaValor valor;
    CartaNaipe naipe;
};

void printCarta(const Carta &);

void printBaralho(const std::vector<Carta, 52> &);

void trocarCarta(Carta &, Carta &);

void embaralharBaralho(const std::vector<Carta, 52> &);

int getRandomNumber(int, int);

#endif