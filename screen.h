#ifndef SCREEN_H
#define SCREEN_H
#include <ostream>
#include <vector>

using namespace std;

/**
 * @brief The Screen class funciona criando e editando telas de desenho.
 */
class Screen{
private:
  int nlin, ncol;
  char brush;
  vector< vector<char> > mat;
public:
  /**
   * @brief Screen Cria uma tela vazia sem tamanho e define o brush como '#'.
   */
  Screen();

  /**
   * @brief Screen Cria uma tela vazia de tamanho pŕe-definido e com brush padrão "#".
   * @param nlin_ Número de linhas da matriz da tela
   * @param ncol_ Número de colunas da matriz da tela
   */
  Screen(int nlin_, int ncol_);

  //construir matriz

  /**
   * @brief newMatriz Define o tamanho de uma tela.
   * @param Número de linhas da matriz da tela
   * @param ncol_ Número de colunas da matriz da tela
   */
  void newMatriz(int nlin_, int ncol_);

  /**
   * @brief setPixel Desenha um pixel da matriz usando o caratere
   * guardado em 'brush'
   * @param x É a coordenada 'x' do pixel a ser inserido.
   * @param y É a coordenada 'x' do pixel a ser inserido.
   */
  void setPixel(int x, int y);

  /**
   * @brief clear Limpa a tela.
   */
  void clear();

  /**
   * @brief setBrush Muda o caractére do desenho.
   * @param brush_ Carcatére o desenho.
   */
  void setBrush(char brush_);

  /**
   * @brief operator << Envia um objeto da classe Screen como saída.
   * @param os Função de saída da biblioteca padrão c++
   * @param t Objeto que será impresso.
   * @return Impressão do objeto t.
   */
  friend ostream &operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
