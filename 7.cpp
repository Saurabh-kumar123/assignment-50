/*7. Create an unordered map and Initialize it from another map using the copy constructor  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_map<string,string> oldmap;
     oldmap["Ground"]="Grass";
     oldmap["Floor"]="Cement";
     oldmap["Table"]="Wood";
     unordered_map<string,string>newmap(oldmap);
     newmap["Fruit"]="Like";
     for(auto& it:newmap)
          cout<<it.first<<" -> "<<it.second<<endl;
     return 0;
}
