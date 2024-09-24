#include<iostream>
using namespace std;
#include<vector>

vector<int> Prime_factors(int num){
  // first i will deal with even numbers means which is divisble by 2
  vector<int> res;
  while (num % 2 == 0){
    res.push_back(2);
    num = num / 2;
  }
  // now num is odd, so skip one element (Note i= i+2) each
  for (int i = 3; i * i <= num ; i += 2){
    // now i will check until num is not divisble by i
    while (num % i == 0){
      res.push_back(i);
      num = num / i;
    }
  }
  return res;
}

int main(){
  int num;
  cout << "Please enter the number: ";
  cin >> num;
  vector<int> prime_factors = Prime_factors(num);
  cout << "Printing the prime number: ";
  for (int i = 0 ; i < prime_factors.size();i++){
    cout << prime_factors[i] << " ";
  }
}