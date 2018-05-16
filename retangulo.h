#ifndef RETANGULO_H
#define RETANGULO_H
#include "screen.h"
#include "figurageometrica.h"

/**
 * @brief The Retangulo class É uma classe concreta derivada d classe FiguraGeometrica
 * que cria um retângulo.
 */
class Retangulo : public FiguraGeometrica
{
    int x,y;
    int lar, alt;
    char fill;

public:
    /**
     * @brief Retangulo Cria um retângulo a partir do canto superior esquerdo
     * e da largura e da altura.
     * @param x_ É a coordenada x do canto superior esquerdo.
     * @param y_ É a coordenada y do canto superior esquerdo.
     * @param lar_ É a largura do retângulo.
     * @param alt_ É a altura do retângulo.
     * @param fill_ Determina se o retângulo será preenchido (true) ou não (false).
     */
    Retangulo(int x_, int y_, int lar_, int alt_, bool fill_=false);
    /**
     * @brief draw Desenha um retângulo na tela t.
     * @param t Tela em que será desenhada o retângulo.
     */
    void draw(Screen& t);
};

#endif // RETANGULO_H
