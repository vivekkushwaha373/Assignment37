#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>s1={1,5,6,9,2};
cout<<"Maximum element is: ";
auto i=max_element(s1.begin(),s1.end());
cout<<*i<<endl;
cout<<"Minimum element is: ";
cout<<*min_element(s1.begin(),s1.end());
    return 0;
}