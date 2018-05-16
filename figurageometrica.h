#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"


/**
 * @brief The FiguraGeometrica class É uma classe abastrada utilizada
 * para desenvolver figuras geométricas.
 */
class FiguraGeometrica
{
public:
    /**
   * @brief FiguraGeometrica É o construtor padrão da classe.
   */
  FiguraGeometrica();
  // metodos virtuais forcam que os
  // ponteiros para a classe base
  // executem metodos da classe derivada
  // quando apontarem para objetos dessa
  // classe derivada

  // funcao virtual pura forca que os
  // descendentes CRIEM suas versoes
  // do metodo draw

  // classes que possuem funcoes virtuais
  // puras sao chamadas de classes abstratas
  /**
   * @brief draw Método virtual que força ponteiros para apontar
   * a suas derivadas;
   * @param t Tela em que as figuras serão desenhadas.
   */
  virtual void draw(Screen& t)=0;
};

#endif // FIGURAGEOMETRICA_H
