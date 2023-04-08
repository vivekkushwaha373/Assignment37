//STL vector: 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>s;
int n;
for(int i=0;i<6;i++)
{
    cout<<"Enter the "<< i+1<<" Element: ";
    cin>>n;
    s.push_back(n);
}
for(int i=0;i<s.size();i++)
cout<<s[i]<<" ";
return 0;
}