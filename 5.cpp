/*5. Given a positive integer N, the task is to print the nearest power of 2 of the frequencies of each digit present in N.
If there exists two nearest powers of 2 for any frequency, print the larger one using unordered map.
 Example:
Input: N = 344422
Output:
2 -> 2
3 -> 1
4 -> 4
Explanation:
 Frequency of the digit 3 is 1.
 Nearest power of 2 is 1.
 Frequency of the digit 4 is 3.
 Nearest power of 2 is 4.
 Frequency of the digit 2 is 2.
 Nearest power of 2 is 2.*/
#include<bits/stdc++.h>
using namespace std;
void nearestpowerofTwoUtil(unordered_map<char,int>&freq)
{
     for(auto & it: freq)
     {
          cout<<it.first<<" -> ";
          int lg = log2(it.second);
          int a = pow(2,lg);
          int b = pow(2,lg+1);
          if((it.second - a)<(b - it.second ))
               cout<<a<<endl;
          else
               cout<<b<<endl;

     }
}
void nearestpowerofTwo(string& s)
{
   //  length of string
      int n = s.size();
      unordered_map<char,int> freq;
      for(int i=0;i<n;i++)
      {
           freq[s[i]]++;

      }
      nearestpowerofTwoUtil(freq);

}
int main()
{
     string n = "344422";
     nearestpowerofTwo(n);
     return 0;
}
