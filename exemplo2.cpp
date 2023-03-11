#include <bits/stdc++.h>

using namespace std;

bool exemplo2(vector<int> array){
    int size  = array.size();
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
          if(i != j && array[i] == array[j])
            return true;
        }
    }
  return false;
}