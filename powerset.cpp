


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n =s.size();
		    vector<string> sss;
		    int power=pow(2,n);
            // for(int i=0; i<n;i++)pow *= 2;

		    for(int counter=0;counter<power;counter++)
		    { vector<char> cha;
		        for(int j=0;j<n;j++)
		        {
		            if(counter&(1<<j))
		            cha.push_back(s[j]);
		        }
                
                string j = "";  
                    int i = 0;  
                    while(i < cha.size())  
                        {  
                        /**retrieving and merging the value of character array on position `i`*/  
                        j = j + cha[i];  
                        i++;  
                        }
                sss.push_back(j);

		    }



		     return sss;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
        vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends