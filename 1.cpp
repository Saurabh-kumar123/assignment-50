/*1. Write a c++ program to demonstrate functionality of unordered map. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_map<string,double> umap = {{"one",1},{"two",2},{"three",3},{"four",4}};
     umap["PI"]=3.14;
     umap["root2"]=1.414;
     umap["root3"]=1.732;
     umap["log10"]=2.302;
     umap.insert(make_pair("e",2.718));
     string key = "PI";
     if(umap.find(key)==umap.end())
          cout<<"key not found"<<endl;
     else
          cout<<"key found"<<endl;
     string keys = "root1";
     if(umap.find(keys)==umap.end())
          cout<<"key not found"<<endl;
     else
          cout<<"key found"<<endl;

          unordered_map<string,double>::iterator itr;

          cout<<"Print all element in unorderd map"<<endl;

          for(itr = umap.begin();itr != umap.end();itr++)
               cout<<itr->first<<" "<<itr->second<<endl;


     return 0;
}
