#include "Human.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector< Human > wekt;
    string          name;
    for (int i = 0; i < 3; i++) {
        cout << "Podaj imie";
        cin >> name;
        if (name == "pop") {
            wekt.pop_back();
        }
        else {
            Human temp{name, 8, true, true};
            wekt.emplace_back(temp);
        }
    }
    cout << wekt.size() << " " << wekt.capacity() << "\n";
    for (int i = 0; i < 2; i++) {

        cout << wekt[i].getName() << " ";
    }
}
