#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v1={1,2,3,4,5};
   vector<int>v2={4,6,1};

   cout<<"Common elements are: "<<endl;
   for(int i=0;i<v1.size();i++)
   {
    for(int j=0;j<v2.size();j++)
    {
        if(v1[i]==v2[j])
        cout<<v1[i]<<" ";
    }
   }
   cout<<endl;
   vector<int>v3(11);
   
    return 0;
}