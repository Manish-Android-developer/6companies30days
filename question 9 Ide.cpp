// { Driver Code Starts
//Number following a pattern 
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
      int i=0,j=0;
       string sol = "";
       int count=1;
        while(i<=S.size()){
          if(S[i]=='I' || i==S.size()){
        while(count>=1)
        {
         if(count<=j)
         break;
          char c = count + '0';
        sol=sol+c;;
         count--;
         }
         j = i+1;
            count = i+1;
            }
        count++;
        i++;
        }
    return sol;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends