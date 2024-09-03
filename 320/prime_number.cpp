#include<iostream>

using namespace std;

bool checkPrime(int num){
  if (num <= 0){
    return false;
  }
  else if (num == 1){
    return false;
  }
  else{
    for (int i = 2;i * i <= num;i++ ){
      if (num % i  == 0){
        return false;
      }
    }
  }
  return true;
}


// int main(){
//   int n ;
//   cin >> n;
//   int res = checkPrime(n);
//   if (res){
//     cout << n << " is prime";
//   }
//   else{
//     cout << n << " is not prime";
//   }
  
// }