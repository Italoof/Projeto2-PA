#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Reta class É uma classe concreta derivada d classe FiguraGeometrica
 * que cria uma reta.
 */
class Reta : public FiguraGeometrica
{
    int x1,x2;
    int y1,y2;
public:
    /**
     * @brief Reta Cria um reta que vai do ponto (x1,y1) até o ponto (x2,y2)
     * @param x1_ Coordenada x do ponto 1
     * @param y1_ Coordenada y do ponto 1
     * @param x2_ Coordenada x do ponto 2
     * @param y2_ Coordenada y do ponto 2
     */
    Reta(int x1_, int y1_, int x2_, int y2_);
    /**
     * @brief draw Desenha uma reta na tela t.
     * @param t Tela em que será desenhada a reta.
     */
    void draw(Screen& t);
    /**
     * @brief Sinal Analisa o sinal de um número em ponto flutuante
     * @param n Número a ser analisado.
     * @return 1, se n for postivo; 0, se n=0; -1, se n for negativo
     */
    int Sinal(float n);
};

#endif // RETA_H
