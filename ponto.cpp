#ifndef PONTO_CPP
#define PONTO_CPP
#include "forma.cpp"

class ponto : forma {
 private:
  float x;
  float y;

 public:
  ponto() {}
  ponto(float x, float y) : x(x), y(y) {}
  float getX() const { return x; }
  float getY() const { return y; }
  void setX(float x) { this->x = x; }
  void setY(float y) { this->y = y; }
  ponto operator+(const ponto& outro) {
    return {this->x + outro.x, this->y + outro.y};
  }

  ponto operator-(const ponto& outro) {
    return {this->x - outro.x, this->y - outro.y};
  }
  virtual void desenhar() const {
    cout << "Ponto: (" << x << ", " << y << ")\n";
  }
};
#endif