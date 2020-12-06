#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
using namespace std;
vector< char > foo(list< Human >& people)
{
    int n=people.size();
    vector<char> niepotwor;
    list<Human>::iterator it=people.end();
    it--;
    for(int i=0;i<n; i++){
      if(it->isMonster())
        niepotwor.push_back('n');
        else
        niepotwor.push_back('y');
      it->birthday();
      it--;
    }
    return niepotwor;
    }
