#include<iostream>
using namespace std;
#include<vector>
#include<set>
int main(){
  vector<vector<int>> mat = {{1,2,3,4},{5,2,1,4},{2,1,3,5},{1,3,2,4}};
  int n = mat.size();
  int m = mat[0].size();
  set<int> st;
  for (int i = 0 ; i < n;i++){
    for (int j = 0 ; j < m ;j++){
      int element = mat[i][j];
      bool flag = false;
      for (int k = 0; k < n ;k++){
        if (k != i){
          for (int l = 0; l < m ;l++){
              if (mat[k][l] == element){
                flag = true;
              }
          }
        }
        else{
          flag = false;
          break;
        }
      }
      if (flag == true){
        st.insert(element);
      }
    }
  }

  // for (int i =0 ; i < m ;i++){
  //   int element - matrix[0][i];
  //   for (int j = 0 ;j < n;j++ ){
  //     bool flag = 
  //   }
  // }





  cout << "Repeated Elements: ";
  for (auto it : st){
    cout << it << " ";
  }
  


}