#ifndef TRIANGULO_CPP
#define TRIANGULO_CPP
#include "poligono.cpp"
class triangulo : public poligono {
 public:
  triangulo() : poligono() { numVertices = 3; }
  triangulo(const ponto& p1, const ponto& p2, const ponto& p3) : poligono() {
    numVertices = 3;
    vertices = new ponto[3];
    vertices[0] = p1;
    vertices[1] = p2;
    vertices[2] = p3;
  }
  float area() override {
    // Usando a fórmula da área do triângulo com base em coordenadas dos vértices
    float x1 = vertices[0].getX();
    float y1 = vertices[0].getY();
    float x2 = vertices[1].getX();
    float y2 = vertices[1].getY();
    float x3 = vertices[2].getX();
    float y3 = vertices[2].getY();

    return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
  }
};
#endif