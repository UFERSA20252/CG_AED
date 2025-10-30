#ifndef FORMA_CPP
#define FORMA_CPP
#include <string.h>
#include <iostream>

using namespace std;

class forma {
 private:
  string nome;

 public:
  forma() : nome() {};
  forma(const char* nome) : nome(nome) {};
  virtual void desenhar() const = 0;
};
#endif