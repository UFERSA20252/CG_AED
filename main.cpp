#include "forma.cpp"
#include "ponto.cpp"
#include "vetor.cpp"
#include "poligono.cpp"
#include "triangulo.cpp"

int main() {
  ponto *pontos = new ponto[4]{ponto(0,0), ponto(1,0), ponto(0,1), ponto(1,1)};
  triangulo t(pontos[0], pontos[1], pontos[2]);
  cout << "Area: " << t.area() << "\n";
  return 0;
}