#include "forma.cpp"
#include "ponto.cpp"
#include "vetor.cpp"
#include "poligono.cpp"

int main() {
  ponto *pontos = new ponto[4]{ponto(0,0), ponto(1,0), ponto(1,1), ponto(0,1)};
  poligono p(pontos, 4);
  p.desenhar();
  delete[] pontos;
  return 0;
}