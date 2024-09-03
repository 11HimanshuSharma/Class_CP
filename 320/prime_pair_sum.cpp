#include<iostream>
#include "prime_number.cpp"
using namespace std;
#include<vector>

vector<vector<int>> findPrimePair(int num){
  vector<vector<int>> primePairs;
  for (int i = 0 ; i <= num;i++){
    if (checkPrime(i) && checkPrime(num-i)){
      primePairs.push_back({i,num-i});
    }
  }
  return primePairs;
}


int main(){
  int number;
  cout << "Please Enter you Number: ";
  cin >> number;

  vector<vector<int>> primePair = findPrimePair(number);
  // printing pairs;
  for (int i = 0 ; primePair.size();i++){
    cout << "{" << primePair[i][0] << "," << primePair[i][1] << "} "; 
  }
  
}