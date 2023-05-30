/*8. Create an unordered map and Initialize it using assignment and subscript operator */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_map<string,string> mp;
     mp["saurabh"]="kumar";
     mp["gaurav"]="kumar";
     mp["riya"]="verma";
     for(auto & it:mp)
          cout<<it.first<<" -> "<<it.second<<endl;
     return 0;
}
