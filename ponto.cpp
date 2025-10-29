#include "forma.cpp"

class ponto : forma {
    private:
        float x;
        float y;

    public:
        ponto(float x, float y) : x(x), y(y){}
        float getX() const {return x;}
        float getY() const {return y;}
        void setX(float x){ this->x = x;}
        void setY(float y){ this->y = y;}
        void desenhar() const {
            cout << "Ponto: ("
                 << x
                 <<", "
                 <<y
                 <<")\n";
        }
};