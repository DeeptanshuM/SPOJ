//http://www.spoj.com/problems/ADDREV/
#include <iostream>
int reverseNum(int n){
int num = 0;
while(n){
        num = 10*num + n % 10;
        n /= 10;
}
return num;
}

int reverseSum(int n1, int n2){
        return reverseNum(reverseNum(n1) + reverseNum(n2));
}

int main(){
int cases = 0;
std::cin >> cases;
int num1, num2;
while(cases--){
        std::cin >> num1 >> num2;
        std::cout << reverseSum(num1, num2) << std::endl;
}

return EXIT_SUCCESS;
}
