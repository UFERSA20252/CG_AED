#include "ponto.cpp"

class vetor : ponto {
 private:
 public:
  vetor(float x, float y) : ponto(x, y) {}
  vetor(ponto p1, ponto p2) : ponto() {
    ponto r = p2 - p1;
    setX(r.getX());
    setY(r.getY());
  }
  vetor() : ponto() {}
  vetor operator+(const vetor& outro) {
    return {this->getX() + outro.getX(), this->getY() + outro.getY()};
  }

  vetor operator-(const vetor& outro) {
    return {outro.getX() - this->getX(), outro.getY() - this->getY()};
  }
  void desenhar() const {
    cout << "Vetor (" << getX() << ", " << getY() << ")";
  }
};