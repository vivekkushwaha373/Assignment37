#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>s1={1,2,3};
vector<int>s2={1,2,3,4,5,6};
cout<<"printing s1 vector: "<<endl;
for(int i=0;i<s1.size();i++)
{
    cout<<s1[i]<<" ";
}
cout<<endl;
cout<<"printing s2 vector: "<<endl;
for(int i=0;i<s2.size();i++)
{
    cout<<s2[i]<<" ";
}
cout<<endl;
s1.swap(s2);
cout<<"After swaping: "<<endl;
cout<<"printing s1 vector: "<<endl;
for(int i=0;i<s1.size();i++)
{
    cout<<s1[i]<<" ";
}
cout<<endl;
cout<<"printing s2 vector: "<<endl;
for(int i=0;i<s2.size();i++)
{
    cout<<s2[i]<<" ";
}
cout<<endl;

return 0;
}