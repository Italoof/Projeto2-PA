#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"
#include <cmath>

/**
 * @brief The Circulo class É uma classe concreta derivada d classe FiguraGeometrica
 * que cria um círculo.
 */
class Circulo : public FiguraGeometrica
{
    int x0, y0;
    int r;
    bool fill;
public:
    /**
     * @brief Circulo Cria um círculo a partir do seu centro cum um determinado raio
     * @param x0_ É a coordenada x do centro do círculo.
     * @param y0_ É a coordenada y do centro do círculo.
     * @param r_ É o raio do círculo.
     * @param fill_ Determina se o cículo será preenchido (true) ou não (false)
     */
    Circulo(int x0_, int y0_, int r_, bool fill_=false);
    void draw(Screen& t);
};

#endif // CIRCULO_H
