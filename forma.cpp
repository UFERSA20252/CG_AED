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
  virtual void desenhar();
};
#endif