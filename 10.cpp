/*10.Given an array arr[] consisting of N integers, the task is to find the maximum element with
the minimum frequency using unordered map.
Example:
Input: arr[] = {2, 2, 5, 50, 1}
 Output: 50
  Explanation:
   The element with minimum frequency is {1, 5, 50}.
    The maximum element among these element is 50. */

#include<bits/stdc++.h>
using namespace std;
int minfreqmaxelement(int arr[],int n)
{
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++)
          mp[arr[i]]++;
     int minfreq = INT_MAX;
     int maxnum = INT_MIN;
     for(auto it : mp)
     {
          int num = it.first;
          int freq = it.second;
          if(freq < minfreq)
          {
               minfreq = freq;
               maxnum = num;
          }
          else if(freq == minfreq && num > maxnum)
               maxnum = num;
     }
     return maxnum;
}
int main()
{
     int arr[]={2,2,5,1,4,3,4,1,1,2,4,3,5,3,3};
     int n = sizeof(arr)/sizeof(arr[0]);
     cout<<"Min frequency with Max element  "<<minfreqmaxelement(arr,n)<<endl;
     return 0;
}
