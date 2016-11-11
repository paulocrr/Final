#include "pila.h"
#include<iostream>
using namespace std;
template<typename U>
Pila<U>::Pila(U arr[], int len){
    for(int i=0;i<len;i++){
        items.push_back(arr[i]);
    }
}

template<typename U>
Pila<U> operator+(Pila<U> x,Pila<U> y){
    Pila<U> temp;
    while(++x.top()){
        temp.Push(*x.top()+*y.top());
        ++y.top();
    }
    return temp;
}

template <typename U>
int Pila<U>::Empty(){
    if(items.size()==0){
        return 0;
    }
    return 1;
}

template<typename U>
void Pila<U>::Push(U element){
    items.push_back(element);
}

template <typename U>
void Pila<U>::Pop(){
    items.pop_back();
}

template <typename U>
U &Pila<U>::Top(){
    int last = items.size()-1;
    return items[last];
}
template <typename U>
void Pila<U>::print_pila(){
    for(int i = 0;i<items.size();i++){
        cout<<items[i]<<endl;
    }
}
template class Pila<int>;
template class Pila<double>;
template class Pila<float>;
template class Pila<char>;
