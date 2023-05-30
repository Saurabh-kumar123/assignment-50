/*2. Given a string, Find the 1st repeated word in a string using unordered map.
 Example: Input : "Ravi had been saying that he had been there"
 Output : had
Input : "Ravi had been saying that"
Output : No Repetition  */
#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
     // to store occurrences word;
     unordered_map<string,int> mp;
     string t="",ans="";
     for(int i=s.length()-1;i>=0;i--)
     {
          if(s[i]!=' ')
               t+=s[i];
               else
               {
                    mp[t]++;   // t ek key h or ++ bta rha h ki t kitne bar aya h
                    if(mp[t]>1)
                    ans=t;
                    t="";
               }
     }
     mp[t]++;
     if(mp[t]>1)
          ans=t;
     if(ans!="")
     {
          reverse(ans.begin(),ans.end());
          cout<<ans<<endl;
     }
     else
          cout<<"No repeat"<<endl;
}
int main()
{
     string u = "Ravi had been saying that he had been there";
     //string v = "Ravi had been saying that";
     //string w = "he had had he";
    solve(u);
     //solve(v);
     //solve(w);
     return 0;
}
