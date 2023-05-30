/*9. Given string str, the task is to find the minimum count of characters that need to be deleted from
the string such that the frequency of each character of the string is unique using unordered map.
Example:
Input: str = “ceabaacb” Output:
2 Explanation: The frequencies of each distinct character are as follows:
c —> 2
e —> 1
a —> 3
b —> 2
 Possible ways to make frequency of each character unique by minimum number of moves are:
  ● Removing both occurrences of ‘c’ modifies str to “eabaab”
  ● Removing an occurrence of ‘c’ and ‘e’ modifies str to “abaacb”
  Therefore, the minimum removals required is 2. */
  #include<bits/stdc++.h>
  using namespace std;
  /* function to find the minimum count of character required to be deleted to make
    frequency of all character unique */
  int minCntCharDeletionsfrequency(string & str,int N)
  {
       /* Store frequency of each distinct character of str*/
       unordered_map<char,int> mp;
       /* Store frequency of each distinct charcter such that the largest
       frequency is present at the top */
       priority_queue<int> pq;
       int cntChar = 0;
       for(int i=0;i<N;i++)
       {
            mp[str[i]]++;
       }
       for(auto &it:mp)
       {
            pq.push(it.second);
       }
       while(!pq.empty())
       {
            int frequency = pq.top();
            pq.pop();
            if(pq.empty())
               return cntChar;
            if(frequency==pq.top())
            {
                 if(frequency > 1)
                 {
                      pq.push(frequency - 1);
                 }
                 cntChar++;
            }
       }
       return cntChar;
  }
  int main()
  {
      //string str = "ceabaacb";
      string str = "abbbcccrrd";
       int n = str.length();
       cout<<"removals required is "<<minCntCharDeletionsfrequency(str,n)<<endl;
       return 0;
  }
