#include "Human.hpp"
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    list< int >           lista;
    list< int >::iterator it = lista.begin();
    lista.push_back(1);
    for (int i = 0; i < 6; i++) {
        lista.push_front(i);
    }
    cout << lista.front() << " " << &lista.front() << " ";
    cout << lista.back() << " " << &lista.back() << "\n";
    // cout << lista[2];
    for (int i = 0; i < 6; i++) {
        cout << *it << " ";
        *it++;
    }
    cout << "\n";
    list< int >::const_reverse_iterator itt = lista.rbegin();
    // *itt--;
    for (int i = 0; i < 6; i++) {
        cout << *itt << " ";
        *itt++;
    }
}
