#include "forma.cpp"

class ponto : forma {
    private:
        float x;
        float y;

    public:
        ponto(float x, float y) : x(x), y(y){}
        ponto() {}
        float getX() const {return x;}
        float getY() const {return y;}
        void setX(float x){ this->x = x;}
        void setY(float y){ this->y = y;}
        ponto static soma(ponto p1, ponto p2){
            return (ponto) {p1.x + p2.x, p1.y + p2.y};
        }
        ponto operator+(const ponto & outro ){
            return {this->x + outro.x, this->y + outro.y};
        }

        ponto operator-(const ponto & outro ){
            return {this->x - outro.x, this->y - outro.y};
        }
        void desenhar() const {
            cout << "Ponto: ("
                 << x
                 <<", "
                 <<y
                 <<")\n";
        }
};