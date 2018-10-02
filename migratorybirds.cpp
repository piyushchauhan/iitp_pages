#include<iostream>
using namespace std;
int main()
{
  long int n,p;
  cin>>n>>p;
  if(p>(n/2))
    cout<<(n-p)/2;
  else
    cout<<p/2;
}
