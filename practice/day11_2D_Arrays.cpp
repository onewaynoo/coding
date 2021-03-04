#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix(6);
    int sum=0;
    for(int i=0;i<6;i++)
{matrix[i].resize(6);
    for(int j=0;j<6;j++){
     cin>>matrix[i][j];
    }
}
    for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++){
     int   temp=0;
     temp+=matrix[i][j];
     temp+=matrix[i][j+1];
     temp+=matrix[i][j+2];

     temp+=matrix[i+1][j+1];

     temp+=matrix[i+2][j];
     temp+=matrix[i+2][j+1];
     temp+=matrix[i+2][j+2];

     if(temp>sum||i==0&&j==0)
     sum=temp;
    }
}
cout<<sum;
    return 0;
}