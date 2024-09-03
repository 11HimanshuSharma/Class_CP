#include<iostream>
#include<vector>
using namespace std;

void Upper_triangular_matrix(vector<vector<int>> &mat){
  for (int i = 0 ; i < mat.size();i++){
    for (int j = 0 ; j < mat.size() ; j++){
      if (i > j) {
        mat[i][j] = 0;
      }
    }
  }

  cout << "printing the matrix" << endl;
  for (int i = 0 ; i < mat.size();i++){
    for (int j = 0 ;j < mat.size();j++){
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

}

int main(){
  vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  Upper_triangular_matrix(arr);

  

}