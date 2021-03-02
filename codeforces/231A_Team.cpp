#include<iostream>
#include<vector>

using namespace std;
int main()
{
vector<vector<int>> problem;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    vector<int> temp;
    
    for(int j=0;j<3;j++)
    {int dump;
        cin>>dump;
        temp.push_back(dump);
    }
    problem.push_back(temp);
}
int v=0;
for(int i=0;i<n;i++)
{
    if(problem[i][0]&&problem[i][1]||problem[i][0]&&problem[i][2]||problem[i][1]&&problem[i][2]||problem[i][0]&&problem[i][1]&&problem[i][2])
    v++;
}
cout<<v;
}