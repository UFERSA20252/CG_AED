#include "forma.cpp"
#include "ponto.cpp"
#include "vetor.cpp"

int main() {
  ponto A(6., 2.);
  ponto origem(1., 1.);
  ponto B(2., 4.);
  ponto r;
  r = A + B;
  r.desenhar();

  vetor v1(origem, A);
  vetor v2(origem, B);
  vetor resul;
  resul = (v2 + v1);
  resul.desenhar();
}