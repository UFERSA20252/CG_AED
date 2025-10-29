#ifndef FORMA_CPP
#define FORMA_CPP
#include <iostream>
#include <string.h>

using namespace std;

class forma {
private:
  string nome;

public:
  forma() : nome(){};
  forma(const char* nome) : nome(nome){};
  virtual void desenhar();
};
#endif