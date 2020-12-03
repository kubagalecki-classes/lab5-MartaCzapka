#include "Human.hpp"
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    list< int > lista;
    lista.push_back(1);
    for (int i = 0; i < 6; i++) {
        lista.push_front(i);
    }
    cout << lista.front() << " " << &lista.front() << " ";
    cout << lista.back() << " " << &lista.back() << "\n";
    // cout << lista[2];
}
