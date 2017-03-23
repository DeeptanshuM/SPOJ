//http://www.spoj.com/problems/PRIME1/
#include <iostream>
#include <vector>
using std::vector;

vector<unsigned long long int> getPrimes(){
  vector <bool> isPrime(32000, true);
  vector <unsigned long long int> primes;
  
  for (unsigned int i=2; i*i <= 32000; i++){
    if(isPrime[i])
    {
      for(unsigned int j=i*i; j <= 32000; j += i)
        isPrime[j] = false;
    }
  }
  
  for(unsigned int i=2; i*i <= 32000; i++)
  {
    if(isPrime[i])
      primes.push_back(i);
  }
  
  return primes;
}

int main(){
  vector <unsigned long long int> prime = getPrimes();
  unsigned int cases;
  unsigned long long int m,n,i;
  
  std::cin >> cases;
  while(cases--){
    std::cin >> m >> n;
    vector<unsigned long long int> num;
    
    if(m > 1 && n > 1){
      for(i = m;i <= n; i++)
      {
        num.push_back(i);
      }
    }
    
    for(i = 0; i<num.size();i++)
    {
      for(unsigned long int j=0; (prime[j] * prime[j]) <= num[i]; j++)
      {
        if(prime[j] != 0){
        if(((num[i] % prime[j]) == 0) && num[i]!=0)
        {
          num[i]=0;
        }
        }}
    }
    
    for(long long int i=0;i<num.size();i++)
    {
      if(num[i] != 0)
        std::cout<< num[i] <<"\n";
    }
    std::cout<<"\n";
  }
  return EXIT_SUCCESS;
}
