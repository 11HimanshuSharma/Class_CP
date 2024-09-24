#include<iostream>
using namespace std;
#include<vector>
#include<cmath>
#include<algorithm>



void Solve(int num){
//  this idea works behind the famous theorem
// num = (a^ 2 - b^ 2);
// num = (a + b) * (a - b);
  int a = ceil(sqrt(num));
  if (a * a == num){
    cout << "{" << a << "," << a << "}";
    return;

  }
  int b;
  while (true){
    int tempB = a * a - num;
    int b = (int)sqrt(tempB);
    if (b * b == tempB){
      break;
    }
    else{
      a++;
    }
  }
  cout << "{" << a <<"," << b<< "]";
}
int main(){
  int num;
  cout << "Please enter the number: ";
  cin >> num;

  Solve(num);
}