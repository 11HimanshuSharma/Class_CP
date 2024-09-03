#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


// int main(){
//   string str = "asdfghjkl";
//   vector<int> V(26,0);

//   for (int i = 0 ; i < str.size();i++){
//     int index = str[i] - 'a';
//     V[index] = 1;
//   }
//   for (int i = 0 ; i < V.size();i++){
//     if (!V[i]){
//       char c = 'a' + i;
//       cout << c << " ";
//     }
//   }
// }


// with duplicates
int main(){
  string str = "aaaaadgaasdgsagasgasdgasgas";
  sort(str.begin(),str.end());
  string str2 = "abcdefghijklmnopqrstuvwxyz";

  int i = 0;
  int j = 0;
  while (i < str.size() && j < str2.size()){
    
    if (str[i] == str2[j]){
      i++;
      j++;
    }
    else{
      if (str[i] > str2[j]){
        cout << str2[j] << " ";
        j++;
      }
      else {
        i++;
      }
    }
  }
  while (j < 26){
    cout << str2[j] << " ";
    j++;
  }

}