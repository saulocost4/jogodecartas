#include "cards.h"
#include <array>
#include <ctime> // para time()
#include <cstdlib> // para rand() e srand()

int main()
{
    srand(static_cast<unsigned int>(time(0)))

    std::array<Carta, 52> baralho;

    using index_t = std::array<Carta, 52>::size_type;
    index_t carta = 0;

    for (int valor = 0; valor < MAX_VALOR; ++valor)
    for (int naipe = 0; valor < MAX_NAIPE; ++naipe)
    {
        baralho[carta].valor = static_cast<CartaValor>(valor);
        baralho[carta].naipe = static_cast<CartaNaipe>(naipe);
        ++carta;
    }

    printBaralho(baralho);

    embaralharBaralho(baralho);
    
    printBaralho(baralho);
    return 0;
}