// #include<iostream>
#include <bits/stdc++.h>
// #include<vector>
// #include<numeric>
using namespace std;
int main()
{
vector<int>v={1,2,3,4,5};
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
cout<<"sum of vector: "<<endl;
cout<<accumulate(v.begin(),v.end(),0);

    return 0;
}