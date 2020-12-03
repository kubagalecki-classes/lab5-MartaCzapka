#include <iostream>
#include <vector>
#include "Human.hpp"
using namespace std;
int main()
{
    vector< int > wekt;
    cout << wekt.size() << " " << wekt.capacity() << "\n";
    for (int i = 0; i < 100; i++) {
        wekt.emplace_back(i + 8);
        // cout << wekt.size() << " " << wekt.capacity() << "\n";
        cout << &wekt[0] << "\n ";
    }
    cout << wekt.size() << " " << wekt.capacity() << "\n";
    for (int i = 0; i < 100; i++) {

        // cout << wekt[i] << " ";
    }
}
