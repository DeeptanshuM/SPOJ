#include <iostream>

int main(){
  int num;
  while(true){
    std::cin >> num;
    if(num == 42)
      break;
    std::cout << num << std::endl;
  }
  
  return EXIT_SUCCESS;
}
