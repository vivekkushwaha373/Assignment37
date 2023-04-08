//STL vector: 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>s;
for(int i=0;i<6;i++)
s.push_back(i+1);
for(int i=0;i<s.size();i++)
cout<<s[i]<<" ";
return 0;
}