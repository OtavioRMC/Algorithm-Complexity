#include <bits/stdc++.h>

using namespace std;

bool exemplo2(vector<int> array){
    int size  = array.size(); // O(1)
    for(int i = 0; i < size; i++){ // O(N)
        for(int j = 0; j < size; j++){ // O(N)
          if(i != j && array[i] == array[j]) //O(1)
            return true;
        }
    }
  return false;
}