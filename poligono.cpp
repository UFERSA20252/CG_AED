#ifndef POLIGONO_CPP
#define POLIGONO_CPP
#include "forma.cpp"
#include "ponto.cpp"
class poligono : public forma {
 private:
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

  /**Método para calcular a área do polígono: Shoelace */
  virtual float area() const {
    float a = 0;
    for (int i = 0; i < numVertices; i++) {
      int j = (i + 1) % numVertices;
      a += vertices[i].getX() * vertices[j].getY();
      a -= vertices[j].getX() * vertices[i].getY();
    }
    return abs(a) / 2.0;
  };
  // virtual float perimetro() const = 0;
};
#endif