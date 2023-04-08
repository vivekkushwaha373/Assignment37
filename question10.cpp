#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i=6;
  vector<int>s1={1,2,3,4,5,6};
  vector<int>::iterator s2=find(s1.begin(),s1.end(),i);
  if(s2!=s1.end())
  cout<<"Element exits "<<endl;
  else
  {
    cout<<"Element doesn't exist";
  }
    return 0;
}