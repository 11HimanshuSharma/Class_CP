#include<iostream>
using namespace std;
#include<vector>

bool isPrime(int num){
  if (num <= 1){
    return false;
  }
  for (int i = 2; i * i <= num;i++){
    if (num % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int num;
  cout << "Please enter the number to test Prime number: ";
  cin >> num;
  int ans = isPrime(num);
  if (ans){
    cout << "The number is Prime.";
  }
  else{
    cout << "The number is not Prime.";
  }
}