//http://www.spoj.com/problems/NSTEPS/

#include <iostream>

void printCoordinates(int x, int y){
  if(x == y){
    if (x % 2 == 0)
      std::cout << x * 2 << std::endl;
    else
      std::cout << (x * 2) - 1 << std::endl;
  }
  else if((y + 2) == x){
    if((x % 2) == 0)
      std::cout << (y * 2) + 2 << std::endl;
    else
      std::cout << (y * 2) + 1 << std::endl;
  }
  else{
    std::cout << "No Number" << std::endl;
  }
}

int main(){
  int N, x, y;
  
  std::cin >> N;
  while(N--){
    std::cin >> x >> y;
    printCoordinates(x, y);
  }
  return EXIT_SUCCESS;
}
