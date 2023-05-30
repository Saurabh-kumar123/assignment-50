/*4. Write a c++ program to demonstrate implementation of find function in unordered map. */
#include<bits/stdc++.h>
using namespace std;
void printfrequency(string s)
{
   unordered_map<char,double> mp;
   for(int i=0;s[i];i++)
   {
        if(mp.find(s[i])==mp.end())
          mp.insert(make_pair(s[i],1));
        else
          mp[s[i]]++;
   }
   for(auto &it:mp)
     cout<<it.first <<" "<<it.second<<endl;
}
int main()
{
     string str = "saurabh kumar";
     printfrequency(str);
     return 0;
}

