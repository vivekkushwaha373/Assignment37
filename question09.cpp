#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
vector<int>s1;
for(int i=0;i<5;i++)
s1.push_back(i+1);
for(int i=0;i<5;i++)
cout<<s1[i]<<" ";
    return 0;
}