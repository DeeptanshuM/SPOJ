//http://www.spoj.com/problems/FCTRL/
#include <iostream>

int getFCTRL(int num){
  int numZeroes = 0;
  int power_of_five = 5;
  int numMultiples = num / power_of_five;
  
  while(numMultiples){
    numZeroes += numMultiples;
    power_of_five *= 5;
    numMultiples = num / power_of_five;
  }
  
  return numZeroes;
}

int main(){
  int N, num;
  
  std::cin >> N;
  while(N--){
    std::cin >> num;
    std::cout << getFCTRL(num) << std::endl;
  }
  return EXIT_SUCCESS;
}
