#ifndef POLIGONO_CPP
#define POLIGONO_CPP
#include "forma.cpp"
#include "ponto.cpp"
#include <math.h>
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
  ponto* ordenar(ponto centroide){
    ponto* ordenados = new ponto[numVertices];
    float* angulos = new float[numVertices];
    for(int i=0; i<numVertices; i++){
      float dx = vertices[i].getX() - centroide.getX();
      float dy = vertices[i].getY() - centroide.getY();
      angulos[i] = atan2(dy, dx);
    }
    // Bubble sort simples baseado nos ângulos
    for(int i=0; i<numVertices-1; i++){
      for(int j=0; j<numVertices-i-1; j++){
        if(angulos[j] > angulos[j+1]){
          swap(angulos[j], angulos[j+1]);
          swap(vertices[j], vertices[j+1]);
        }
      }
    }
    for(int i=0; i<numVertices; i++){
      ordenados[i] = vertices[i];
    }
    delete[] angulos;
    return ordenados;
  }

  /**Método para calcular a área do polígono: Shoelace */
  virtual float area() {
    ponto centro = centroide();
    ponto* ordenados = ordenar(centro);
    float a = 0;
    for (int i = 0; i < numVertices; i++) {
      int j = (i + 1) % numVertices;
      a += ordenados[i].getX() * ordenados[j].getY();
      a -= ordenados[j].getX() * ordenados[i].getY();
    }
    return abs(a) / 2.0;
  };
  // virtual float perimetro() const = 0;
};
#endif