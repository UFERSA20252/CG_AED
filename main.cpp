#include "ponto.cpp"
#include "forma.cpp"

int main(){
    ponto p1(3., 4.);
    ponto p2(9., 3.);
    ponto r;
    r = p1 + p2;
    r.desenhar();
}