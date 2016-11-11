#include <iostream>
#define MIN(X,Y) ((X)<(Y)?(X):(Y))
#include "pila.h"
using namespace std;
template <typename T>
T Min(T a, T b){
    if(a<b){
        return a;
    }
    return b;
}
main()
{
    int arr[5]= {1,2,3,4,5};
    Pila<int> s1(arr,5);
    s1.print_pila();
    char a = '0';
    char b = '1';
    char res = MIN(a,b);
    //cout<<res<<endl;
}
