#include <iostream>
#include <vector>

using namespace std;


int LinearSearch(vector<int> vec, int target) {
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] > target) {
            return i;
        }
    }
    return -1;

}

int main() {
    vector<int> vec = {9, 2, 3, 7, 1, 2}; 
    int target = 7;
    
    int index = LinearSearch(vec, target);
    
    if(index != -1) {
        cout << "Elemento encontrado en el indice: " << index << endl;
        } else {
            cout << "Elemento no encontrado" << endl;
        }

    return 0;
}

