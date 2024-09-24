#include<iostream>
#include<vector>
using namespace std;

void Solve(vector<int>& val){
    int low = 0, mid = 0;
    int high = val.size() - 1;

    while (mid <= high) {
        if (val[mid] == 0) {
            swap(val[low], val[mid]);
            low++;
            mid++;
        } else if (val[mid] == 1) {
            mid++;
        } else { // val[mid] == 2
            swap(val[mid], val[high]);
            high--;
        }
    }
}

int main(){
    vector<int> val = {1, 1, 1, 2, 2, 2, 0, 1, 0, 2, 0};
    Solve(val);
    for (int i = 0 ; i < val.size(); i++){
        cout << val[i] << " ";
    }
    cout << endl;
    return 0;
}
