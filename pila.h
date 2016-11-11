#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<vector>
using namespace std;
template<typename U>
class Pila{
private:
    vector<U> items;
public:
    Pila(U arr[], int len);
    int Empty();
    void Push(U element);
    void Pop();
    U &Top();
    void print_pila();
    friend Pila operator+(Pila x,Pila y);
};


#endif // PILA_H_INCLUDED
