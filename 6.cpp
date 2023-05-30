/*6. Given two integers L, R, and an integer K, the task is to print all the pairs of
Prime Numbers from the given range whose difference is K using unordered map.
 Example: Input: L = 1, R = 19, K = 6 Output: (5, 11) (7, 13) (11, 17) (13, 19)
 Explanation: The pairs of prime numbers with difference 6 are (5, 11), (7, 13), (11, 17), and (13, 19).  */

#include<bits/stdc++.h>
using namespace std;
void findPrimeNos(int L,int R,unordered_map<int,int>& M)
{
     for(int i=L;i<=R;i++)
      M[i]++;
      //Erase 1 as its non prime
      if(M.find(1)!=M.end())
          M.erase(1);
      //perform sieve of Eratosthenes
      for(int i = 2; i<= sqrt(R);i++)
      {
           int multiple = 2;
           while((i*multiple)<=R)
           {
                if(M.find(i*multiple)!=M.end())
                    M.erase(i*multiple);  //erase non prime
                multiple++;

           }
      }
}
void getprimePairs(int L,int R,int K)
{
    unordered_map<int,int> M;
    //Generate all prime number
    findPrimeNos(L,R,M);
    // travers the map;
    for(auto & it:M)
    {
         if(M.find(it.first+K)!=M.end())
          cout<<"("<<it.first<<","<<it.first+K<<")";

    }
}
int main()
{
     //given range
     int L = 1, R = 19;
     //given k
     int K = 6;
     // function call
     getprimePairs(L,R,K);
     return 0;
}
