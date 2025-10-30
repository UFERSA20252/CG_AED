#ifndef POLIGONO_CPP
#define POLIGONO_CPP
#include "forma.cpp"
#include "ponto.cpp"
class poligono : public forma {
 protected:
  ponto* vertices;
  int numVertices;

 public:
  poligono() : forma(), vertices(nullptr), numVertices(0) {}
  poligono(const ponto* p, int numVertices)
      : forma(), numVertices(numVertices) {
    vertices = new ponto[numVertices];
    for (int i = 0; i < numVertices; i++) {
      vertices[i] = p[i];
    }
  }
  ponto* getPontos() const { return vertices; }
  int getNumPontos() const { return numVertices; }
  ponto centroide() const {
    float sx = 0;
    float sy = 0;
    for (int i = 0; i < numVertices; i++) {
      sx += vertices[i].getX();
      sy += vertices[i].getY();
    }
    return ponto(sx / numVertices, sy / numVertices);
  }
  void desenhar() const {
    cout << "Poligono com " << numVertices << " vertices.\n";
    for (int i = 0; i < numVertices; i++) {
      vertices[i].desenhar();
    }
  }
};
#endif