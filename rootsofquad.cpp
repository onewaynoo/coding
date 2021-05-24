#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int>ans;
        int D=b*b-4*a*c;
        if(D<0)
        {
            ans.push_back(-1);
            return ans;
        }
        if(D==0)
        {
            ans.push_back(floor(-b*1.0/(2*a*1.0)));
            ans.push_back(floor(-b*1.0/(2*a*1.0)));
            return ans;
            
        }
        ans.push_back(floor((-b-sqrt(D))/(2*a*1.0)));
        ans.push_back(floor((-b+sqrt(D))/(2*a*1.0)));
         sort(ans.begin(),ans.end(),greater<int>());
         return ans;
    }
};



int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << floor(roots[i]) << " ";
        cout << endl;
    }
    return 0;
}